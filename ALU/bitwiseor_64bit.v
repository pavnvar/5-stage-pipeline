`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:29:06 02/13/2024 
// Design Name: 
// Module Name:    bitwiseor_64bit 
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
module bitwiseor_64bit(
    input [63:0] A,
    input [63:0] B,
    output [63:0] out
    );
	 
	 assign out = A | B ;


endmodule
