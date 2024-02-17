`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:51:50 02/16/2024 
// Design Name: 
// Module Name:    alu 
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
module alu(
    input [63:0] A,
    input [63:0] B,
    input [5:0] Shiftamt,
    input [2:0] Sel,
    input clk,
    output reg [63:0] Output
    );


	wire [63:0] Sum, Diff,BAnd,Bor,BXnor,Comp,Shiftop,Outputtmp;
   wire Carry, Borrow;
   // Instantiate the module
	
	full_adder_64bit adder (
    .A(A), 
    .B(B), 
    .Cin(0), 
    .Carry(Carry), 
    .Sum(Sum)
    );


	full_subtractor_64bit subtractor (
		 .A(A), 
		 .B(B), 
		 .Bin(0), 
		 .Bout(Borrow), 
		 .Diff(Diff)
		 
	);
	

   bitwiseor_64bit bitwiseor (
    .A(A), 
    .B(B), 
    .out(Bor)
    );


   bitwisexnor_64bits bitwisexnor (
    .A(A), 
    .B(B), 
    .out(BXnor)
    );

   bitwiseand_64bit bitwiseand (
    .A(A), 
    .B(B), 
    .Out(BAnd)
    );

	comp_64bit comp (
		 .A(A), 
		 .B(B), 
		 .outp(Comp)
		);

  // Instantiate the module
   logicalshift_64bit logicalshift (
    .data(A), 
    .shift_amount(Shiftamt), 
    .shifted_data(Shiftop)
    );

	// Instantiate the module
	mux_64bit_8to1 mux (
		 .A(Sum), 
		 .B(Diff), 
		 .C(Bor), 
		 .D(BXnor), 
		 .E(BAnd), 
		 .F(Comp), 
		 .G(Shiftop), 
		 .H(64'h0000_0000_0000_0000), 
		 .S(Sel), 
		 .Output(Outputtmp)
		 );
  


	always @(posedge clk) begin
			Output <= Outputtmp; 
	end

endmodule
