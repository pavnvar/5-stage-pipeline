`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:42:09 02/14/2024 
// Design Name: 
// Module Name:    comp_64bit 
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
module comp_64bit(
    input [63:0] A,
    input [63:0] B,
    output [63:0] outp
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

	 /*
	     One hot code encoeded state with last 3 bits of the output giving 3 different scenarios
	     if Hexa decimel last bit = 0 ; A<B
		  if Hexa decimel last bit = 2 ; A>B
	     if Hexa decimel last bit = 4 ; A==4
		  
	 */
	  assign outp = (Bout == 1 || Diff[63] == 1) ? 64'h0000_0000_0000_0001 :
                  (Bout == 0 && Diff[63] == 0 && Diff != 64'h0000_0000_0000_0000) ? 64'h0000_0000_0000_0002 :
                  (Bout == 0 && Diff == 64'h0000_0000_0000_0000) ? 64'h0000_0000_0000_0004 : 64'h0000_0000_0000_0000;
	

endmodule
