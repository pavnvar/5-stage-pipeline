`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:56:38 02/16/2024 
// Design Name: 
// Module Name:    full_subtractor_64bit 
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
module full_subtractor_64bit(
    input [63:0] A,
    input [63:0] B,
    input Bin,
    output Bout,
    output [63:0] Diff
    );

    wire B_negative = ~B + 1;
	 full_adder_64bit fa_64	 (
    .A(A), 
    .B(B), 
    .Cin(Bin), 
    .Sum(Diff), 
    .Carry(Bout)
    );

	 
endmodule
