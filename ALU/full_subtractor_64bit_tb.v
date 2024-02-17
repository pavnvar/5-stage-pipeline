`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:07:42 02/16/2024
// Design Name:   full_subtractor_64bit
// Module Name:   C:/ALU/full_subtractor_64bit_tb.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_subtractor_64bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module full_subtractor_64bit_tb;

	// Inputs
	reg [63:0] A;
	reg [63:0] B;
	reg Bin;

	// Outputs
	wire Bout;
	wire [63:0] Diff;

	// Instantiate the Unit Under Test (UUT)
	full_subtractor_64bit uut (
		.A(A), 
		.B(B), 
		.Bin(Bin), 
		.Bout(Bout), 
		.Diff(Diff)
	);

	initial begin
      
        #100;
        A = 64'h64;
        B = 64'h32;
        Bin = 1'b0;

        // Scenario 7: A = -50, B = 25, Bin = 0
        #100;
        A = 64'hFFFFFFFFFFFFFFCE;
        B = 64'h19;
        Bin = 1'b0;

        // Scenario 8: A = 25, B = 50, Bin = 1
        #100;
        A = 64'h19;
        B = 64'h32;
        Bin = 1'b1;

  
        #100;
        $finish;
    end
      
endmodule

