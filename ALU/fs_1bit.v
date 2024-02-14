`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:57:31 02/13/2024 
// Design Name: 
// Module Name:    fs_1bit 
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
module fs_1bit(
    input A,
    input B,
    input Bin,
    output Bout,
    output Diff
    );
	 
	 
	wire xor1, xor2, not1, not2,and1, and2;
	xor (xor1 , A,B);
	not (not1, A);
	not (not2, xor1);
	xor (Diff, xor1, Bin);
	and (and1, B, not1);
	and (and2, not2, Bin);
	or (Bout,and1, and2);

endmodule
