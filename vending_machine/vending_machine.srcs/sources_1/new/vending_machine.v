module vending_machine(
    input clk_100M,          // 100MHz 时钟
    input rst,               // 复位信号
    input [7:0] SW,          // 8位拨码开关 (符合图片要求 k[7:0])
    input [3:0] BT,          // 4个按键
    output reg [31:0] disp_data // 输出给数码管扫描模块的数据
);

    // =========================================================
    // 1. 信号定义与映射
    // =========================================================
    // 按键映射 (根据图片描述)
    wire scortbt_raw = BT[0]; // 补货确认 / 投币确认
    wire get_raw     = BT[1]; // 购买
    wire sel_raw     = BT[2]; // 选择商品
    wire finish_raw  = BT[3]; // 退币

    // 内部存储器 (核心修改：使用数组实现多商品记忆)
    // 4种商品，单价3位(0-7)，库存4位(0-15)
    reg [2:0] price_mem [0:3]; 
    reg [3:0] stock_mem [0:3];

    // 状态寄存器
    reg [1:0] curr_goods;    // 当前选中的商品编号 (0-3)
    reg [6:0] coin;          // 投币金额 (0-127)
    reg [3:0] buy_cnt;       // 本次购买数量
    
    // 退币显示控制
    reg is_refund;           // 退币状态标志
    reg [6:0] refund_coin;   // 记录退了多少钱
    reg [26:0] refund_timer; // 计时器

    // 实时读取当前选中商品的信息 (组合逻辑查表)
    wire [2:0] current_price = price_mem[curr_goods];
    wire [3:0] current_stock = stock_mem[curr_goods];

    // =========================================================
    // 2. 按键消抖逻辑 (保持之前的高效写法)
    // =========================================================
    reg [18:0] cnt_scortbt, cnt_get, cnt_sel, cnt_finish;
    reg scortbt_press, get_press, sel_press, finish_press;

    always @(posedge clk_100M or posedge rst) begin
        if(rst) begin
            cnt_scortbt <= 0; scortbt_press <= 0;
            cnt_get <= 0;     get_press <= 0;
            cnt_sel <= 0;     sel_press <= 0;
            cnt_finish <= 0;  finish_press <= 0;
        end else begin
            // 简单的倒计时消抖
            cnt_scortbt <= scortbt_raw ? 19'd500_000 : (cnt_scortbt ? cnt_scortbt-1 : 0);
            scortbt_press <= (cnt_scortbt == 1);

            cnt_get <= get_raw ? 19'd500_000 : (cnt_get ? cnt_get-1 : 0);
            get_press <= (cnt_get == 1);

            cnt_sel <= sel_raw ? 19'd500_000 : (cnt_sel ? cnt_sel-1 : 0);
            sel_press <= (cnt_sel == 1);

            cnt_finish <= finish_raw ? 19'd500_000 : (cnt_finish ? cnt_finish-1 : 0);
            finish_press <= (cnt_finish == 1);
        end
    end

    // =========================================================
    // 3. 核心业务逻辑
    // =========================================================
    always @(posedge clk_100M or posedge rst) begin
        if (rst) begin
            // 复位清零
            curr_goods <= 0;
            coin <= 0;
            buy_cnt <= 0;
            is_refund <= 0;
            refund_timer <= 0;
            // 初始化内存（可选，默认全0）
            price_mem[0] <= 0; price_mem[1] <= 0; price_mem[2] <= 0; price_mem[3] <= 0;
            stock_mem[0] <= 0; stock_mem[1] <= 0; stock_mem[2] <= 0; stock_mem[3] <= 0;
            disp_data <= 0;
        end 
        else begin
            // --- 全局通用逻辑：切换商品 ---
            if (sel_press) begin
                curr_goods <= curr_goods + 1'b1; // 0->1->2->3->0 自动溢出循环
            end

            // --- 模式判断 (SW[7]) ---
            if (SW[7] == 1'b1) begin
                // ===========================
                // 补货模式 (SW[7]=1)
                // ===========================
                is_refund <= 0; // 强制退出退币状态

                // 录入数据：按下 scortbt
                // SW[6:4] -> 单价, SW[3:0] -> 库存
                if (scortbt_press) begin
                    price_mem[curr_goods] <= SW[6:4];
                    stock_mem[curr_goods] <= SW[3:0];
                end

                // 显示逻辑：商品 | 单价 | 库存 | 0 (补货时购买数显0)
                // 对应图片： Digit3   Digit2   Digit1   Digit0
                disp_data <= {16'd0, 2'b00, curr_goods, 1'b0, current_price, current_stock, 4'd0};
            end 
            else begin
                // ===========================
                // 售卖模式 (SW[7]=0)
                // ===========================
                
                // 1. 投币逻辑：按下 scortbt
                // 此时金额由 SW[6:0] 决定
                if (scortbt_press) begin
                    coin <= SW[6:0]; 
                    buy_cnt <= 0;      // 新交易清空购买数
                    is_refund <= 0;    // 停止退币显示
                end

                // 2. 购买逻辑：按下 get
                // 判据：钱够 && 有库存
                if (get_press && (coin >= current_price) && (current_stock > 0)) begin
                    coin <= coin - current_price;
                    stock_mem[curr_goods] <= current_stock - 1'b1; // 修改对应数组里的库存
                    buy_cnt <= buy_cnt + 1'b1;
                end

                // 3. 退币逻辑：按下 finish
                if (finish_press) begin
                    refund_coin <= coin;
                    coin <= 0;
                    is_refund <= 1'b1;      // 开启显示标志
                    refund_timer <= 0;      // 计时器归零
                end

                // 4. 退币显示计时 (1秒自动恢复)
                if (is_refund) begin
                    refund_timer <= refund_timer + 1'b1;
                    if (refund_timer >= 27'd100_000_000) begin
                        is_refund <= 1'b0;
                    end
                end

                // ===========================
                // 动态显示逻辑
                // ===========================
                if (is_refund) begin
                    // 退币时：显示金额 (假设显示在中间两段)
                    // 格式：空 | 十位 | 个位 | 空
                    disp_data <= {16'd0, 4'd0, (refund_coin/10)%10, (refund_coin%10), 4'd0};
                end else begin
                    // 正常售卖时：完全符合图片图6.11的格式
                    // 从左到右：[商品号] [单价] [库存] [已买数]
                    // 对应数码管：AN3     AN2     AN1     AN0
                    disp_data <= {16'd0, 
                                  2'b00, curr_goods,   // 显示商品 (0-3)
                                  1'b0, current_price, // 显示单价 (0-7)
                                  current_stock,       // 显示库存 (0-15)
                                  buy_cnt};            // 显示本单购买数
                end
            end
        end
    end

endmodule