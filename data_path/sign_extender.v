`timescale 1ns/1ps

module sign_extender
#(
    INPUT_WIDTH  = 16,
    OUTPUT_WIDTH = 64
)
(
    input wire  [INPUT_WIDTH-1:0]   in_data,
    output wire [OUTPUT_WIDTH-1:0]  out_data
);
    assign out_data = {{(OUTPUT_WIDTH-INPUT_WIDTH){in_data[INPUT_WIDTH-1]}}, in_data};
endmodule