`timescale 1ns/1ps

module generic_mux
#(
    parameter THREAD_INDEX_BITS = 3,
    parameter LINE_WIDTH = 8
)
(
    input wire [LINE_WIDTH*THREAD_INDEX_BITS**2-1:0]    in_lines,
    input wire [THREAD_INDEX_BITS-1:0]                  select_bits,

    output wire [LINE_WIDTH-1:0]                        out_line
);

    assign out_line = in_lines[select_bits*LINE_WIDTH +: LINE_WIDTH];

endmodule