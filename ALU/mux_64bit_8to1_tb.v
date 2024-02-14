`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:12:07 02/14/2024
// Design Name:   mux_64bit_8to1
// Module Name:   C:/Xilinx/ALU/mux_64bit_8to1_tb.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux_64bit_8to1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux_64bit_8to1_tb;

	// Inputs
	reg [63:0] A;
	reg [63:0] B;
	reg [63:0] C;
	reg [63:0] D;
	reg [63:0] E;
	reg [63:0] F;
	reg [63:0] G;
	reg [63:0] H;
	reg [2:0] S;

	// Outputs
	wire [63:0] Output;

	// Instantiate the Unit Under Test (UUT)
	mux_64bit_8to1 uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.E(E), 
		.F(F), 
		.G(G), 
		.H(H), 
		.S(S), 
		.Output(Output)
	);

	initial begin
		// Initialize Inputs
		A = 64'hAAAA_AAAA_AAAA_AAAA;
		B = 64'hBBBB_BBBB_BBBB_BBBB;
		C = 64'hCCCC_CCCC_CCCC_CCCC;
		D = 64'hDDDD_DDDD_DDDD_DDDD;
		E = 64'hEEEE_EEEE_EEEE_EEEE;
		F = 64'hFFFF_FFFF_FFFF_FFFF;
		G = 64'h1111_1111_1111_1111;
		H = 64'h2222_2222_2222_2222;
		S = 3'b000; // Select input A initially

		// Wait 100 ns for global reset to finish
		#100;

		// Apply stimulus
		#10 S = 3'b001; // Select input B
		#10 S = 3'b010; // Select input C
		#10 S = 3'b011; // Select input D
		#10 S = 3'b100; // Select input E
		#10 S = 3'b101; // Select input F
		#10 S = 3'b110; // Select input G
		#10 S = 3'b111; // Select input H

		// Monitor outputs
		$display("Output = %h", Output);

		// Stop simulation after some time
		#200 $stop;
	end
      
endmodule

