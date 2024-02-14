`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:43:48 02/14/2024
// Design Name:   comp_64bit
// Module Name:   C:/Xilinx/ALU/comp_64bit_tb.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: comp_64bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module comp_64bit_tb;

	// Inputs
	reg [63:0] A;
	reg [63:0] B;

	// Outputs
	wire [63:0] outp;

	// Instantiate the Unit Under Test (UUT)
	comp_64bit uut (
		.A(A), 
		.B(B), 
		.outp(outp)
	);

	initial begin
        // Initialize Inputs
        #10 A = 64'hAAAA_BBBB_CCCC_DDDD;
        #10 B = 64'h1111_2222_3333_4444;


        #10 A = 64'h0000_0000_0000_0000;
        #10 B = 64'h1111_2222_3333_4554;
		  
		  #10 A = 64'h1111_2222_3333_4444;
        #10 B = 64'h0000_0000_0000_0000;

		  
		  #10 A = 64'h1111_2222_3333_4444;
		  #10 B = 64'h1111_2222_3333_4444;

        // Wait for initial signals to settle
  

        // Apply stimulus
        #10 A = 64'hAAAA_AAAA_AAAA_AAAA;
        #10 B = 64'hBBBB_BBBB_BBBB_BBBB;

        // Wait for signals to propagate through the comparator
      

        // Monitor outputs
        

        // Stop simulation after some time
        #200 $stop;
    end
      
endmodule

