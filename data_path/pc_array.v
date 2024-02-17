`timescale 1ns/1ps

module pc_array
#(
    THREAD_INDEX_BITS = 3,
    PC_WIDTH = 8
)
(
    input wire [THREAD_INDEX_BITS-1:0]  in_thread_index,
    input wire                          in_increment_flag,

    output wire [PC_WIDTH-1:0]          out_program_counter,

    input wire clk,
    input wire reset
);

    reg [PC_WIDTH-1:0] program_counter [2**THREAD_INDEX_BITS-1:0];

    integer i;

    always@(posedge clk) begin
        if (reset) begin
            for (i = 0; i < 2**THREAD_INDEX_BITS; i = i + 1) begin
                program_counter[i] <= 'h0;
            end
        end else begin
            if (in_increment_flag) begin
                program_counter[in_thread_index] <= program_counter[in_thread_index] + 1;
            end
        end
    end

    assign out_program_counter = program_counter[in_thread_index];



endmodule