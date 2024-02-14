`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:20:10 02/13/2024 
// Design Name: 
// Module Name:    fs_64bit 
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
module fs_64bit(
    input [63:0] A,
    input [63:0] B,
    input Bin,
    output Bout,
    output [63:0] Diff
	
    );
	 
	 
	 wire [63:0] diff_bits;
	 wire [63:0] barrow_out;
	 
	 generate
		genvar i;
			for (i =0; i<64 ; i= i+1) begin : gen_fs_ins
				fs_1bit fs_ins(
					.A (A[i]),
					.B (B[i]),
					.Bin (barrow_out[i-1]),
					.Diff( diff_bits[i]),
					.Bout (barrow_out[i])
					
				);
				
			end
		endgenerate
		
		
		assign Diff = diff_bits;
		assign Bout = barrow_out[63];
		
		
		
	 
	 
	 


endmodule
