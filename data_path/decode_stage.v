`timescale 1ns/1ps


module decode_stage
#(
    parameter IMMEDIATE_WIDTH = 16,
    parameter DATA_WIDTH = 64,
    parameter REG_INDEX_BITS = 5,
    parameter THREAD_INDEX_BITS = 3,
    parameter INSTR_WIDTH = 32
)
(
    // Pipeline Inputs
    input wire [INSTR_WIDTH-1:0]            in_instruction,
    input wire [THREAD_INDEX_BITS-1:0]      in_thread_index,

    // Writeback Inputs 
    input wire                              in_write_back_enable_flag,
    input wire [DATA_WIDTH-1:0]             in_write_back_data,

    // Pipeline outputs
    output wire                             out_increment_flag,
    output wire                             out_load_word_flag,
    output wire                             out_store_word_flag,
    output wire [REG_INDEX_BITS-1:0]        out_reg_index,
    output wire [IMMEDIATE_WIDTH-1:0]       out_immediate,
    output wire [DATA_WIDTH-1:0]            out_reg_data,

    output wire [THREAD_INDEX_BITS-1:0]     out_thread_index,

    // Misc
    input wire clk // We need a clock because the register file lives inside this module
);

    // We will impelement a custom ISA for now, not RISC-V.
    // The first 6 bits of the instruction will be the opcode.
    // The next 5 bits will be the register to operate on.
    // The next 16 bits will be the immediate value.
    // The opcode for increment is 000001, load is 000010, store is 000011

    wire [5:0] opcode;
    assign opcode = in_instruction[5:0];

    wire [4:0] register;
    assign register = in_instruction[11:6];

    wire [15:0] immediate;
    assign immediate = in_instruction[31:16];

    assign out_immediate        = immediate;
    assign out_increment_flag   = opcode == 6'b000001;
    assign out_load_word_flag   = opcode == 6'b000010;
    assign out_store_word_flag  = opcode == 6'b000011;
    assign out_reg_index        = register;
    assign out_thread_index = in_thread_index;

    wire [REG_INDEX_BITS+THREAD_INDEX_BITS-1:0] reg_addr;
    assign reg_addr = {in_thread_index, register};

    register_file #(
        .DATA_WIDTH(DATA_WIDTH),
        .REG_INDEX_BITS(REG_INDEX_BITS),
        .THREAD_INDEX_BITS(THREAD_INDEX_BITS)
    ) register_file_instance(
        .in_raddr(reg_addr),
        .in_waddr(reg_addr),
        .in_wdata(in_write_back_data),
        .in_we(in_write_back_enable_flag),
        .out_rdata(out_reg_data),
        .clk(clk)
    );


endmodule
