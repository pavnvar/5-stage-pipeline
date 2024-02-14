`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:58:39 02/12/2024 
// Design Name: 
// Module Name:    full_adder_1_bit 
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
module full_adder_1_bit(
    input A,
    input B,
    input Cin,
    output Sum,
    output Carry
);

	wire xor1, xor2, and1, and2;
	xor (xor1 , A,B);
	xor (Sum, xor1, Cin);
	and (and1, A,B);
	and (and2, xor1, Cin);
	or (Carry,and1, and2);
	
endmodule
