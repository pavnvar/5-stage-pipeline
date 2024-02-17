`timescale 1ns/1ps

module decode_ex1_registers
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
    input wire [DATA_WIDTH-1:0]         in_reg_data,
    input wire [REG_INDEX_BITS-1:0]     in_reg_index,
    input wire [THREAD_INDEX_BITS-1:0]  in_thread_index,

    // Pipeline outputs
    output reg                          out_increment_flag,
    output reg                          out_load_word_flag,
    output reg                          out_store_word_flag,
    output reg [IMMEDIATE_WIDTH-1:0]    out_immediate,
    output reg [REG_INDEX_BITS-1:0]     out_reg_index,
    output reg [THREAD_INDEX_BITS-1:0]  out_thread_index,

    // ========================================================================================================
    // Output register data.
    // ========================================================================================================
    // Note that those are not regs but wires.
    // This is because it's not calaculated by combinational logic in the decode stage,
    // but rather by the register file. The register file takes the address of the register
    // and set its output to the value of the register on the positive clock edge (with some delay, ~2.5ns).
    // This delay eats up some clock cycle in the ex1 stage.
    // ========================================================================================================
    output wire [DATA_WIDTH-1:0]         out_reg_data,

    // Misc
    input wire clk,
    input wire reset
);

    assign out_reg_data = in_reg_data;

    always@(posedge clk) begin
        if (reset) begin
            out_increment_flag   <= 0;
            out_load_word_flag   <= 0;
            out_store_word_flag  <= 0;
        end else begin
            out_increment_flag   <= in_increment_flag;
            out_load_word_flag   <= in_load_word_flag;
            out_store_word_flag  <= in_store_word_flag;
            out_immediate        <= in_immediate;
            out_reg_index        <= in_reg_index;
            out_thread_index     <= in_thread_index;
        end
    end

endmodule