`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:16:00 02/12/2024
// Design Name:   full_adder_1_bit
// Module Name:   C:/Xilinx/ALU/full_adder_1_bit_tb.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_adder_1_bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module full_adder_1_bit_tb;

	// Inputs
	reg A;
	reg B;
	reg Cin;

	// Outputs
	wire Sum;
	wire Carry;

	// Instantiate the Unit Under Test (UUT)
	full_adder_1_bit uut (
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
    #10 A = 1; B = 0; Cin = 0;
    #10 A = 0; B = 1; Cin = 0;
    // Check the output
    #10 $display("Test Case 1: A=%b, B=%b, Cin=%b, Sum=%b, Carry=%b", A, B, Cin, Sum, Carry);

    // Test case 2
    #10 A = 1; B = 1; Cin = 0;
    // Check the output
    #10 $display("Test Case 2: A=%b, B=%b, Cin=%b, Sum=%b, Carry=%b", A, B, Cin, Sum, Carry);

    // Test case 3
    #10 A = 1; B = 1; Cin = 1;
    // Check the output
    #10 $display("Test Case 3: A=%b, B=%b, Cin=%b, Sum=%b, Carry=%b", A, B, Cin, Sum, Carry);

    // Add more test cases as needed

    // Stop simulation
    #10 $stop;

  end
      
endmodule

