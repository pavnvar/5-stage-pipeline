`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:22:07 02/12/2024 
// Design Name: 
// Module Name:    FA_64bit_sync 
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

module FA_64bit_sync(
    input [63:0] A,
    input [63:0] B,
    input Cin,
    output Carry,
    output [63:0] Sum
	 
 );
	 

	 
	 
	wire [63:0] inter_sum;
	wire [63:0] inter_carry;
	wire Carry_final;
	
	
	genvar i;
	generate 
		for (i=0; i < 64 ; i = i+1 ) begin : genFA
		   if (i==0) begin : first_1_bit_adder
				full_adder_1_bit instance_name (
					.A(A[i]), 
					.B(B[i]), 
					.Cin(0), 
					.Sum(inter_sum[i]), 
					.Carry(inter_carry[i])
			);
			end
			
			else begin:non_first_1_bit_adder
			full_adder_1_bit instance_name (
				.A(A[i]), 
				.B(B[i]), 
				.Cin(inter_carry[i-1]), 
				.Sum(inter_sum[i]), 
				.Carry(inter_carry[i])
			);
			end
		end
	endgenerate
	
	
	assign Carry_final = inter_carry[63];

	

	assign Sum = inter_sum ;
	assign Carry = Carry_final; 

	
	 



endmodule
