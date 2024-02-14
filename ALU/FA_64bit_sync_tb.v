`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:18:15 02/13/2024
// Design Name:   FA_64bit_sync
// Module Name:   C:/Xilinx/ALU/FA_64bit_sync_tb.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FA_64bit_sync
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module FA_64bit_sync_tb;

  // Inputs
  reg [63:0] A;
  reg [63:0] B;
  reg Cin;
  //reg clk;

  // Outputs
  wire Carry;
  wire [63:0] Sum;

  // Instantiate the Unit Under Test (UUT)
  FA_64bit_sync uut (
    .A(A), 
    .B(B), 
    .Cin(Cin), 
    .Carry(Carry), 
    .Sum(Sum)
    //.clk(clk)
  );
  // Initial block
  initial begin
    // Initialize Inputs
    A = 0;
    B = 0;
    Cin = 0;

    // Apply some test vectors
    // Test case 1
    #10 A = 64'h1234_5678_9ABC_DEF0;
    #10 B = 64'h8765_4321_0FED_CBA9;
    #10 Cin = 0;
    // Check the output
    #10 $display("Test Case 1: A=%h, B=%h, Cin=%b, Sum=%h, Carry=%b", A, B, Cin, Sum, Carry);

    // Test case 2
    #10 A = 64'h0000_0000_0000_0000;
    #10 B = 64'h0000_0000_0000_0001;
    #10 Cin = 0;
    // Check the output
    #10 $display("Test Case 2: A=%h, B=%h, Cin=%b, Sum=%h, Carry=%b", A, B, Cin, Sum, Carry);

    // Test case 3
    #10 A = 64'h1111_1111_1111_1111;
    #10 B = 64'hFFFF_FFFF_FFFF_FFFF;
    #10 Cin = 0;
    // Check the output
    #10 $display("Test Case 3: A=%h, B=%h, Cin=%b, Sum=%h, Carry=%b", A, B, Cin, Sum, Carry);

    // Add more test cases as needed

    // Stop simulation
    #10 $stop;

  end
      
endmodule

