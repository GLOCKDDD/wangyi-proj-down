`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2020/12/14 22:30:40
// Design Name: 
// Module Name: Tube_Display
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module Tube_Display(
    input rst,
    input clk_100M,
    input [31:0] SW,
    input [1:0] Sel,     //选择要显示的数据
    output [7:0] AN,     //片选编码（驱动哪一位数码管点亮）
    output [7:0] SEG     // 段选信号（点亮哪些段，以显示字形）
    );
   
    reg [31:0] Data;
    Tube The_Tube(
      .clk(clk_100M),
      .rst(rst),
      .Data(Data),          //显示数据  
      .AN(AN),
      .SEG(SEG)
    );
  
    always @(*)
    begin
        case(Sel)
            2'b00: Data = SW;   //=00:显示SW上的数据
            2'b01: Data = 32'h01234567; 
            2'b10: Data = 32'h89abcdef; 
            2'b11: Data = 32'h19491001; 
        endcase
    end
    
endmodule