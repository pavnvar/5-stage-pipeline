`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:16:38 02/13/2024
// Design Name:   bitwisexnor_64bits
// Module Name:   C:/Xilinx/ALU/bitwisexnor_64bit_tb.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: bitwisexnor_64bits
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module bitwisexnor_64bit_tb;

	// Inputs
	reg [63:0] A;
	reg [63:0] B;

	// Outputs
	wire [63:0] out;

	// Instantiate the Unit Under Test (UUT)
	bitwisexnor_64bits uut (
		.A(A), 
		.B(B), 
		.out(out)
	);


    // Testbench stimulus
    initial begin
        // Initialize Inputs
        #10 A = 64'hAAAA_BBBB_CCCC_DDDD;
        #10 B = 64'h1111_2222_3333_4444;

        // Wait 100 ns before applying stimulus
        

        // Apply stimulus
        #10 A = 64'hFFFF_FFFF_FFFF_FFFF;
        #10 B = 64'h0000_0000_0000_0001;
		  
		  #10 A = 64'hFFFF_FFFF_FFFF_FFFF;
        #10 B = 64'h1111_1111_1111_1111;

        

        // Stop simulation after some time
        #200 $stop;
    end
      
endmodule

