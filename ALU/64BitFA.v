`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:58:36 02/12/2024 
// Design Name: 
// Module Name:    64BitFA 
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
module 1bitFA(
	input A,B, Cin,
	output Sum, Carry,
);

	output Sum;
	output carry;
	
	
	wire xor1, xor2, and1, and2;
	
	
	
	
	xor gate_xor1 (.a(A), .b(B), .o(xor1));
	xor gate_xor2 (.a(xor1), .b(Cin), .o(Sum));
	
	and gate_and1 (.a(A), .b(B), .o(and1));
	and gate_and2 (.a(xor1), .b(Cin), .o(and2));
	
	or gate_or (.a(and1), .b(and2), .o(Carry));
	
endmodule

module 64BitFA(
    input [63:0] A,
    input [63:0] B,
    input Cin,
    output [63:0] Sum,
    output Carry,
    input Clk
    );


endmodule
