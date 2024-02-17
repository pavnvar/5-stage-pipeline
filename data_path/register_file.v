`timescale 1ns/1ps

module register_file
#(
    parameter DATA_WIDTH = 64,
    parameter REG_INDEX_BITS = 5,
    parameter THREAD_INDEX_BITS = 3
)
(
    // Memory controls and data input
    input wire [REG_INDEX_BITS+THREAD_INDEX_BITS-1:0]   in_raddr,
    input wire [REG_INDEX_BITS+THREAD_INDEX_BITS-1:0]   in_waddr,
    input wire [DATA_WIDTH-1:0]                         in_wdata,
    input wire                                          in_we,

    // Memory data output
    output reg [DATA_WIDTH-1:0]    out_rdata,

    // Misc
    input wire clk
);

    reg [DATA_WIDTH-1:0] bram [2**(REG_INDEX_BITS+THREAD_INDEX_BITS)-1:0];

    always@(posedge clk) begin
        if (in_we) begin
            bram[in_waddr] <= in_wdata;
        end
        out_rdata <= bram[in_raddr];
    end

endmodule