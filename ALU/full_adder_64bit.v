`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:06:27 02/16/2024 
// Design Name: 
// Module Name:    full_adder_64bit 
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
module full_adder_64bit(
    input [63:0] A,
    input [63:0] B,
    input Cin,
    output [63:0] Sum,
    output Carry
    );


	wire [63:0] p; // Generate signals
	wire [63:0] g; // Propagate signals

	// Generate and propagate signals
	assign p = A | B;
	assign g = A & B;

	// Carry lookahead logic
	wire [63:0] c_in; // Carry-in for each stage
	wire [63:0] c_out; // Carry-out from each stage

	assign c_in[0] = Cin;
	genvar i;
	generate
         for (i = 0; i < 63; i=i+1) begin : lookahead_logic
              assign c_out[i] = (i == 0) ? (p[i] | (g[i] & c_in[i])) : (g[i] | (p[i] & c_in[i]));
              assign c_in[i+1] = c_out[i];
         end
			assign c_out[63] = g[63] | (p[63] & c_in[63]);

    endgenerate

	assign cout = c_out[63]; // Carry out is the carry-out of the last stage
	
	// Sum calculation
	assign Sum = A + B + (64'b0 | Cin); // Add inputs and carry-i
	assign Carry = c_out[63];
endmodule
