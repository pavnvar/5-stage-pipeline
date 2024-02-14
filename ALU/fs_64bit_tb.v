`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:54:15 02/13/2024
// Design Name:   fs_64bit
// Module Name:   C:/Xilinx/ALU/fs_64bit_tb.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fs_64bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module fs_64bit_tb;

  // Inputs
  reg [63:0] A;
  reg [63:0] B;
  reg Bin;
  //reg clk;

  // Outputs
  wire Bout;
  wire [63:0] Diff;

  // Instantiate the Unit Under Test (UUT)
  fs_64bit uut (
    .A(A), 
    .B(B), 
    .Bin(Bin), 
    .Bout(Bout), 
    .Diff(Diff) 
   // .clk(clk)
  );

  // Clock generation
  // Clock generation


  // Testbench stimulus
  initial begin
    #10 A = 64'hAAAA_BBBB_CCCC_DDDD;
    #10 B = 64'h1111_2222_3333_4444;
    #10 Bin = 0;
	 
	 #10 A = 64'hAAAA_BBBB_CCCC_DDDD;
    #10 B = 64'h0000_0000_0000_0000;
    #10 Bin = 0;


    // Apply some test vectors
    #10 B = 64'hFFFF_FFFF_FFFF_FFFF;
    #10 A = 64'h0000_0000_0000_0001;
    #10 Bin = 1;

    // Monitor outputs
   // always @(posedge clk) begin
    //  $display("Time=%t A=%b B=%b Bin=%b Diff=%b Bout=%b", $time, A, B, Bin, Diff, Bout);
   // end

    // Stop simulation after some time
    #200 $stop;
  end

endmodule
