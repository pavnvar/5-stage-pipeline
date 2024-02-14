`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:40:22 02/14/2024 
// Design Name: 
// Module Name:    comparator_64bit 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module comparator_64bit(
    input [63:0] A,
    input [63:0] B,
    output [63:0] out
    );
    
	 
	 wire [63:0] Diff;
    wire Bout;
	
	
	fs_64bit instance_name (
		 .A(A), 
		 .B(B), 
		 .Bin(Bin), 
		 .Bout(Bout), 
		 .Diff(Diff)
		 
		 );

	 assign out = 64'h0000_0000_0000_0000;
	 assign out[0] = (Bout == 1 || Diff[63] == 1) ? 1: 0;
	 assign out[1] = (Bout == 0 && Diff[63] == 0 && Diff != 64'h0000_0000_0000_0000) ? 1 :0;
	 assign out[2] = (Bout == 0 && Diff == 64'h0000_0000_0000_0000) ? 1 : 0;


endmodule
