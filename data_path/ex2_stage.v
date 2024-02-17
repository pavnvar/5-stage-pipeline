`timescale 1ns/1ps

module ex2_stage 
#(
    parameter IMMEDIATE_WIDTH = 16,
    parameter DATA_WIDTH = 64,
    parameter REG_INDEX_BITS = 5,
    parameter THREAD_INDEX_BITS = 3
)
(
    // Pipeline Inputs
    input wire                          in_increment_flag,
    input wire                          in_load_word_flag,
    input wire                          in_store_word_flag,
    input wire [IMMEDIATE_WIDTH-1:0]    in_immediate,

    input wire [THREAD_INDEX_BITS-1:0]  in_thread_index,

    input wire [REG_INDEX_BITS-1:0]     in_reg_index,
    input wire [DATA_WIDTH-1:0]         in_reg_data,

    // Pipeline outputs
    output wire                          out_increment_flag,
    output wire                          out_load_word_flag,
    output wire                          out_store_word_flag,
    output wire [IMMEDIATE_WIDTH-1:0]    out_immediate,

    output wire [THREAD_INDEX_BITS-1:0]  out_thread_index,

    output wire [REG_INDEX_BITS-1:0]     out_reg_index,

    output wire [DATA_WIDTH-1:0]         out_data
);

    wire [DATA_WIDTH-1:0] sign_extended_immediate;
    wire [DATA_WIDTH-1:0] incremented_reg_data;

    sign_extender #(
        .INPUT_WIDTH(IMMEDIATE_WIDTH),
        .OUTPUT_WIDTH(DATA_WIDTH)
    ) sign_extender_inst (
        .in_data(in_immediate),
        .out_data(sign_extended_immediate)
    );

    assign incremented_reg_data = in_reg_data + sign_extended_immediate;

    assign out_increment_flag   = in_increment_flag;
    assign out_load_word_flag   = in_load_word_flag;
    assign out_store_word_flag  = in_store_word_flag;
    assign out_immediate        = in_immediate;
    assign out_thread_index     = in_thread_index;
    assign out_reg_index        = in_reg_index;
    assign out_data             = in_increment_flag ? incremented_reg_data : in_reg_data;

endmodule
