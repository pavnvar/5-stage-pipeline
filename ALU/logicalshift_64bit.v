`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:49:46 02/13/2024 
// Design Name: 
// Module Name:    logicalshift_64bit 
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
module logicalshift_64bit(
    input [63:0] data,
    input [5:0] shift_amount,
    output [63:0] shifted_data
    );


    assign shifted_data = data >> shift_amount; // Logical right shift operation
    



endmodule
