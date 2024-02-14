`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:11:49 02/13/2024
// Design Name:   fs_1bit
// Module Name:   C:/Xilinx/ALU/fs_1bit_tb.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fs_1bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module fs_1bit_tb;

  // Inputs
  reg A;
  reg B;
  reg Bin;

  // Outputs
  wire Bout;
  wire Diff;

  // Instantiate the Unit Under Test (UUT)
  fs_1bit uut (
    .A(A),
    .B(B),
    .Bin(Bin),
    .Bout(Bout),
    .Diff(Diff)
  );

  // Initial block
  initial begin
    // Initialize Inputs
    A = 0;
    B = 0;
    Bin = 0;

    // Apply some test vectors
    #10 A = 0; B = 0; Bin = 0; // Test Case 1
    #10 A = 1; B = 0; Bin = 0; // Test Case 2
    #10 A = 0; B = 1; Bin = 0; // Test Case 3
    #10 A = 1; B = 1; Bin = 0; // Test Case 4
    #10 A = 0; B = 0; Bin = 1; // Test Case 5
    #10 A = 1; B = 0; Bin = 1; // Test Case 6
    #10 A = 0; B = 1; Bin = 1; // Test Case 7
    #10 A = 1; B = 1; Bin = 1; // Test Case 8

    // Display results
    //$display("Test Case 1: A=%b, B=%b, Bin=%b, Diff=%b, Bout=%b", A, B, Bin, Diff, Bout);
    // Repeat for other test cases

    // Stop simulation
    #10 $stop;
  end

endmodule

