`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:16:21 02/16/2024
// Design Name:   full_adder_64bit
// Module Name:   C:/ALU/full_adder_64bit_tb.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_adder_64bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module full_adder_64bit_tb;

	// Inputs
	reg [63:0] A;
	reg [63:0] B;
	reg Cin;

	// Outputs
	wire [63:0] Sum;
	wire Carry;

	// Instantiate the Unit Under Test (UUT)
	full_adder_64bit uut (
		.A(A), 
		.B(B), 
		.Cin(Cin), 
		.Sum(Sum), 
		.Carry(Carry)
	);

	initial begin
		// Initialize Inputs
    A = 0;
    B = 0;
    Cin = 0;

    // Apply some test vectors
    // Test case 1
    A = 64'h1234_5678_9ABC_DEF0;
    B = 64'h8765_4321_0FED_CBA9;
    Cin = 0;
    // Check the output
    #100 $display("Test Case 1: A=%h, B=%h, Cin=%b, Sum=%h, Carry=%b", A, B, Cin, Sum, Carry);

    // Test case 2
    A = 64'h0000_0000_0000_0000;
    B = 64'h0000_0000_0000_0001;
    Cin = 0;
    // Check the output
    #100 $display("Test Case 2: A=%h, B=%h, Cin=%b, Sum=%h, Carry=%b", A, B, Cin, Sum, Carry);

    // Test case 3
    A = 64'h1111_1111_1111_1111;
    B = 64'hFFFF_FFFF_FFFF_FFFF;
    Cin = 0;
    // Check the output
    #100 $display("Test Case 3: A=%h, B=%h, Cin=%b, Sum=%h, Carry=%b", A, B, Cin, Sum, Carry);

    // Add more test cases as needed

    // Stop simulation
    #10 $stop;


	end
      
endmodule

