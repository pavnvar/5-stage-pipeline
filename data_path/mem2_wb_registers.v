`timescale 1ns/1ps

module mem2_wb_registers
#(
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
    output reg                          out_write_back_flag,
    output reg [REG_INDEX_BITS-1:0]     out_reg_index,
    output reg [THREAD_INDEX_BITS-1:0]  out_thread_index,
    output wire [DATA_WIDTH-1:0]        out_data,

    // Misc
    input wire                         clk,
    input wire                         reset
);

    always @(posedge clk) begin
        if (reset) begin
            out_write_back_flag  <= 1'b0;
        end else begin
            out_write_back_flag  <= in_write_back_flag;
            out_reg_index        <= in_reg_index;
            out_thread_index     <= in_thread_index;
            out_data             <= in_data;
        end
    end

endmodule