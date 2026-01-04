`timescale 1ns / 1ps
// 8位 七段数码管扫描显示模块
module Tube(
    input clk,                  //时钟源20MHz
    input rst,                  //复位信号
    input [31:0] Data,          //32位待显示数据
    output reg [7:0] AN,        //片选编码（驱动某位数码管点亮）
    output reg [7:0] SEG        // 段选信号（点亮哪些段，以显示字形）
    );
    
    // 分频扫描，从左至右循环驱动每一位数码管,扫描间隔2ms
    //分频系数至少200000
    reg [16:0] count;
    wire clk_fresh;     //扫描时钟
    always @(posedge rst  or posedge clk) 
    begin
      if(rst)   count <= 0;
      else      count <= count + 1'b1;
    end
    assign  clk_fresh = count[16];  //使用count[16]作为数码管扫描时钟
    
    reg [2:0] bit_select;   ////要点亮的当前数码管位号，000→TB0，……111→TB7
    always @(posedge rst  or posedge clk_fresh) //扫描显示，逐位循环扫描各位
    begin
      if(rst)   bit_select <= 0; 
      else  bit_select <= bit_select + 1'b1;     //换下一个数码管点亮
    end
    always @(*)         //组合逻辑电路
    begin
        case (bit_select)         //当前的选中显示的这位数码管，置为0点亮，取反后送共阳极
            0: AN = 8'b1111_1110; // 最低位数码管TB0
            1: AN = 8'b1111_1101;
            2: AN = 8'b1111_1011;
            3: AN = 8'b1111_0111;
            4: AN = 8'b1110_1111;
            5: AN = 8'b1101_1111;
            6: AN = 8'b1011_1111;
            7: AN = 8'b0111_1111; // 最高位数码管TB7
        endcase
    end
        
    // 选择当前点亮的数码管对应显示的数字  
    reg [3:0] data_x; 
    always @(*)
    begin
        case (bit_select)
            0: data_x = Data[3:0];   // 最低位数码管TB0，显示最低4位
            1: data_x = Data[7:4];   // 次低位数码管TB1，显示次低4位
            2: data_x = Data[11:8];
            3: data_x = Data[15:12];
            4: data_x = Data[19:16];
            5: data_x = Data[23:20];
            6: data_x = Data[27:24];
            7: data_x = Data[31:28]; // 最高位数码管TB7，显示最高4位
        endcase
    end
    
    always @(*)
    begin
      case (data_x) // 根据当前要显示的数字，点亮数码管的对应段，显示字形
        4'h0: SEG = 8'b0000_0011; // 除g、dp外全亮，显示数字0
        4'h1: SEG = 8'b1001_1111; // 仅b、c亮，显示数字1
        4'h2: SEG = 8'b0010_0101;
        4'h3: SEG = 8'b0000_1101;
        4'h4: SEG = 8'b1001_1001;
        4'h5: SEG = 8'b0100_1001;
        4'h6: SEG = 8'b0100_0001;
        4'h7: SEG = 8'b0001_1111;
        4'h8: SEG = 8'b0000_0001;
        4'h9: SEG = 8'b0000_1001;
        4'hA: SEG = 8'b0001_0001;
        4'hB: SEG = 8'b1100_0001;
        4'hC: SEG = 8'b0110_0011;
        4'hD: SEG = 8'b1000_0101;
        4'hE: SEG = 8'b0110_0001;
        4'hF: SEG = 8'b0111_0001;
      endcase
    end
endmodule 
