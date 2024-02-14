`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:42:19 02/13/2024 
// Design Name: 
// Module Name:    bitwiseand_64bit 
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
module bitwiseand_64bit(
    input [63:0] A,
    input [63:0] B,
    output [63:0] Out
	 );


	
	assign Out =(A & B);
			
	


endmodule

