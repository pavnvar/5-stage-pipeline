`timescale 1ns/1ps

module mem1_stage
#
(
    parameter IMMEDIATE_WIDTH = 16,
    parameter DATA_WIDTH = 64,
    parameter REG_INDEX_BITS = 5,
    parameter THREAD_INDEX_BITS = 3,
    parameter DATA_MEM_ADDR_BITS = 8
)
(
    // Pipeline inputs
    input wire                          in_increment_flag,
    input wire                          in_load_word_flag,
    input wire                          in_store_word_flag,
    input wire [IMMEDIATE_WIDTH-1:0]    in_immediate,

    input wire [THREAD_INDEX_BITS-1:0]  in_thread_index,

    input wire [REG_INDEX_BITS-1:0]     in_reg_index,

    input wire [DATA_WIDTH-1:0]         in_data,

    // Pipeline outputs
    output wire                         out_write_back_flag,
    output wire [REG_INDEX_BITS-1:0]    out_reg_index,

    output wire [THREAD_INDEX_BITS-1:0] out_thread_index,

    output wire [DATA_WIDTH-1:0]        out_data,

    // Data memory interface
    output wire [THREAD_INDEX_BITS+DATA_MEM_ADDR_BITS-1:0]  data_mem_raddr,
    input wire [DATA_WIDTH-1:0]                             data_mem_rdata,
    output wire [THREAD_INDEX_BITS+DATA_MEM_ADDR_BITS-1:0]  data_mem_waddr,
    output wire [DATA_WIDTH-1:0]                            data_mem_wdata,
    output wire                                             data_mem_we,

    // Misc
    input wire                          clk
);

    localparam DATA_BYTE_ADDR_BITS = $clog2(DATA_WIDTH / 8);


    wire [THREAD_INDEX_BITS+DATA_MEM_ADDR_BITS-1:0] addr;
    wire [DATA_WIDTH-1:0]                           wdata;
    wire                                            we_flag;

    wire [DATA_WIDTH-1:0]                           bram_out_data;


    assign addr = {in_thread_index, in_immediate[DATA_MEM_ADDR_BITS+DATA_BYTE_ADDR_BITS-1:DATA_BYTE_ADDR_BITS]};
    assign wdata = in_data;
    assign we_flag = in_store_word_flag;

    assign out_data = in_load_word_flag ? bram_out_data : in_data;
    assign out_write_back_flag = in_load_word_flag | in_increment_flag;


    assign data_mem_raddr = addr;
    assign data_mem_waddr = addr;
    assign data_mem_wdata = wdata;
    assign data_mem_we = we_flag;
    assign bram_out_data = data_mem_rdata;

    // // We here just re-use the register file module as memory
    // register_file #(
    //     .DATA_WIDTH(DATA_WIDTH),
    //     .REG_INDEX_BITS(DATA_MEM_ADDR_BITS),
    //     .THREAD_INDEX_BITS(THREAD_INDEX_BITS)
    // ) data_memory (
    //     .in_raddr(addr),
    //     .in_waddr(addr),
    //     .in_wdata(wdata),
    //     .in_we(we_flag),
    //     .out_rdata(bram_out_data),
    //     .clk(clk)
    // );
endmodule