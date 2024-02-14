`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:08:29 02/14/2024 
// Design Name: 
// Module Name:    mux_64bit_8to1 
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
module mux_64bit_8to1(
    input [63:0] A,
    input [63:0] B,
    input [63:0] C,
    input [63:0] D,
    input [63:0] E,
    input [63:0] F,
    input [63:0] G,
    input [63:0] H,
    input [2:0] S,
    output reg [63:0] Output
    );

	always @*
    case (S)
        3'b000: Output = A;
        3'b001: Output = B;
        3'b010: Output = C;
        3'b011: Output = D;
        3'b100: Output = E;
        3'b101: Output = F;
        3'b110: Output = G;
        3'b111: Output = H;
        default: Output = 64'h0; // Default case, can be modified based on your requirements
    endcase
	
endmodule
