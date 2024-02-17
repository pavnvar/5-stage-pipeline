`timescale 1ns/1ps

module mem2_stage
#
(
    parameter DATA_WIDTH = 64,
    parameter REG_INDEX_BITS = 5,
    parameter THREAD_INDEX_BITS = 3
)
(
    // Pipeline inputs
    input wire                          in_write_back_flag,
    input wire [REG_INDEX_BITS-1:0]     in_reg_index,
    input wire [THREAD_INDEX_BITS-1:0]  in_thread_index,
    input wire [DATA_WIDTH-1:0]         in_data,

    // Pipeline outputs
    output wire                         out_write_back_flag,
    output wire [REG_INDEX_BITS-1:0]    out_reg_index,
    output wire [THREAD_INDEX_BITS-1:0] out_thread_index,
    output wire [DATA_WIDTH-1:0]        out_data
);

    assign out_write_back_flag = in_write_back_flag;
    assign out_reg_index = in_reg_index;
    assign out_thread_index = in_thread_index;
    assign out_data = in_data;

endmodule
