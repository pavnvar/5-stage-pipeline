`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:48:58 02/14/2024
// Design Name:   alu_8op
// Module Name:   C:/Xilinx/ALU/alu_8op_tb.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu_8op
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_8op_tb;

	// Inputs
	reg [63:0] A;
	reg [63:0] B;
	reg [5:0] Shiftamt;
	reg [2:0] Sel;
   reg clk;
	// Outputs
	wire [63:0] Output;

	// Instantiate the Unit Under Test (UUT)
	alu_8op uut (
		.A(A), 
		.B(B), 
		.Shiftamt(Shiftamt), 
		.Sel(Sel), 
		.Output(Output),
		.clk(clk)
	);
   initial begin
	 clk=0;
	 while(1) begin
	   #20;
	   clk = ~clk;
	 end
	end
	initial begin
    // Initialize Inputs
    A = 64'hAAAA_BBBB_CCCC_DDDD;
    B = 64'h1111_2222_3333_4444;
    Shiftamt = 6;
    Sel = 3'b000;

    // Wait for global reset to finish
    #100;

    // Test addition operation
    
    A = 64'hAAAA_AAAA_AAAA_AAAA;
    B = 64'hBBBB_BBBB_BBBB_BBBB;
    Sel = 3'b000;
    $display("A=%h, B=%h, Shiftamt=%h, Sel=%b, Output=%h", A, B, Shiftamt, Sel, Output);
	 #100;
    // Test subtraction operation
    $display("Testing Subtraction");
    A = 64'hAAAA_AAAA_AAAA_AAAA;
    B = 64'hBBBB_BBBB_BBBB_BBBB;
    Sel = 3'b001;
    $display("A=%h, B=%h, Shiftamt=%h, Sel=%b, Output=%h", A, B, Shiftamt, Sel, Output);
    #100;
    // Test OR operation
    $display("Testing OR");
    A = 64'hAAAA_AAAA_AAAA_AAAA;
    B = 64'hBBBB_BBBB_BBBB_BBBB;
    Sel = 3'b010;
	 #100;
    $display("A=%h, B=%h, Shiftamt=%h, Sel=%b, Output=%h", A, B, Shiftamt, Sel, Output);

    // Test XOR operation
    $display("Testing XOR");
     A = 64'hAAAA_AAAA_AAAA_AAAA;
     B = 64'hBBBB_BBBB_BBBB_BBBB;
     Sel = 3'b011;
	  #100;
    $display("A=%h, B=%h, Shiftamt=%h, Sel=%b, Output=%h", A, B, Shiftamt, Sel, Output);

    // Test AND operation
    $display("Testing AND");
    A = 64'hAAAA_AAAA_AAAA_AAAA;
    B = 64'hBBBB_BBBB_BBBB_BBBB;
    Sel = 3'b100;
	 #100;
    $display("A=%h, B=%h, Shiftamt=%h, Sel=%b, Output=%h", A, B, Shiftamt, Sel, Output);

    // Test Comparator operation
    $display("Testing Comparator");
    A = 64'hAAAA_AAAA_AAAA_AAAA;
    B = 64'hBBBB_BBBB_BBBB_BBBB;
    Sel = 3'b101;
	 #100;
    $display("A=%h, B=%h, Shiftamt=%h, Sel=%b, Output=%h", A, B, Shiftamt, Sel, Output);

    // Test Logical Shift operation
    $display("Testing Logical Shift");
    A = 64'hAAAA_AAAA_AAAA_AAAA;
    B = 64'hBBBB_BBBB_BBBB_BBBB;
    Shiftamt = 4;
    Sel = 3'b110;
	 #100;
    $display("A=%h, B=%h, Shiftamt=%h, Sel=%b, Output=%h", A, B, Shiftamt, Sel, Output);

    // Stop simulation after some time
    #11200 $stop;
  end
      
endmodule

