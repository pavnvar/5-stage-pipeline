`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:35:36 02/13/2024 
// Design Name: 
// Module Name:    and_64bit 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module and_64bit(
    input [63:0] A,
    input [63:0] B,
    output reg [63:0] out,
	 input clk
);
	 
		always @(posedge clk) begin
			out = A & B
			
		end


endmodule
