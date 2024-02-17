`timescale 1ns/1ps

module fetch_decode_registers
#(
    parameter INSTR_WIDTH = 32,
    parameter THREAD_INDEX_BITS = 3
)
(
    // Pipeline Inputs
    input wire [INSTR_WIDTH-1:0]        in_instruction,
    input wire [THREAD_INDEX_BITS-1:0]  in_thread_index,

    // Pipeline Outputs
    output wire [INSTR_WIDTH-1:0]        out_instruction,
    output reg  [THREAD_INDEX_BITS-1:0]  out_thread_index,

    // Misc
    input wire clk,
    input wire reset
);

    assign out_instruction = in_instruction;

    always@(posedge clk) begin
        out_thread_index <= in_thread_index;
    end

endmodule