`timescale 1ns / 1ps

module tb_fast();

    // 1. 信号定义
    reg clk_100M;
    reg rst;
    reg [7:0] SW;
    reg [3:0] BT;
    wire [31:0] disp_data;

    // 2. 实例化模块 (保持名为 u_vm 以便下方引用)
    vending_machine u_vm (
        .clk_100M(clk_100M),
        .rst(rst),
        .SW(SW),
        .BT(BT),
        .disp_data(disp_data)
    );

    // 3. 时钟生成
    initial clk_100M = 0;
    always #5 clk_100M = ~clk_100M;

    // 4. 定义"加速按键"任务
    // 原理：模拟按下后，直接篡改内部计数器，跳过 5ms 等待
    task fast_press;
        input [1:0] btn_idx; // 0:scortbt, 1:get, 2:sel, 3:finish
        begin
            BT[btn_idx] = 1;      // 1. 物理按下
            #20;                  // 2. 等待一点点时间让信号进去
            
            // 3. 【关键步骤】直接修改内部寄存器
            // 假设你的目标值是 500,000，我们直接把它改成 499,995
            // 这样只需要再过 5 个时钟周期，逻辑就会触发
            // 请根据你源码中实际的计数器变量名修改下方代码！
            case(btn_idx)
                0: u_vm.cnt_scortbt = 19'd499995; 
                1: u_vm.cnt_get     = 19'd499995; 
                // 如果你有 sel 和 finish 的消抖，也在这里加
                // 2: u_vm.cnt_sel     = 19'd499995; 
                // 3: u_vm.cnt_finish  = 19'd499995;
            endcase
            
            #200;                 // 4. 等待触发完成
            BT[btn_idx] = 0;      // 5. 松开按键
            #100;                 // 6. 冷却
        end
    endtask

    // 5. 极速测试流程
    initial begin
        // --- 初始化 ---
        rst = 1; SW = 0; BT = 0;
        #50;
        rst = 0;
        #50;

        // --- 步骤1：管理员极速补货 ---
        SW[7] = 1;             // 进货模式
        SW[6:0] = 7'b010_0101; // 单价2元(010)，库存5个(0101)
        #50;
        fast_press(0);         // 瞬间写入！

        // --- 步骤2：用户极速投币 ---
        SW[7] = 0;             // 用户模式
        SW[6:0] = 7'd10;       // 投币10元
        #50;
        fast_press(0);         // 瞬间投币！

        // --- 步骤3：极速购买 ---
        // 假设默认选中商品0
        fast_press(1);         // 按下 Get，余额10->8，库存5->4

        // --- 步骤4：退币 ---
        // 如果你的 finish 键也有消抖，记得在上面 task 里加代码
        // 这里简单模拟按下
        BT[3] = 1; 
        #50;
        BT[3] = 0;

        #200;
        $stop;
    end

endmodule