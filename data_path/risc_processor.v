`timescale 1ns/1ps

module risc_processor
#(
    PC_WIDTH = 8,
    INSTR_WIDTH = 32,
    THREAD_INDEX_BITS = 3,
    IMMEDIATE_WIDTH = 16,
    DATA_WIDTH = 32,
    REG_INDEX_BITS = 5,
    DATA_MEM_ADDR_BITS = 8
)
(
    // Register file interface
    input wire  [DATA_WIDTH-1:0]                            reg_access_rdata,
    output wire [THREAD_INDEX_BITS+REG_INDEX_BITS-1:0]      reg_access_raddr,
    output wire [THREAD_INDEX_BITS+REG_INDEX_BITS-1:0]      reg_access_waddr,
    output wire [DATA_WIDTH-1:0]                            reg_access_wdata,
    output wire                                             reg_access_we,

    // Instruction memory interface
    output wire [PC_WIDTH-1:0]                              instr_mem_pc,
    input wire  [INSTR_WIDTH-1:0]                           instr_mem_instruction,

    // Data memory interface
    output wire [THREAD_INDEX_BITS+DATA_MEM_ADDR_BITS-1:0]  data_mem_raddr,
    input wire  [DATA_WIDTH-1:0]                            data_mem_rdata,
    output wire [THREAD_INDEX_BITS+DATA_MEM_ADDR_BITS-1:0]  data_mem_waddr,
    output wire [DATA_WIDTH-1:0]                            data_mem_wdata,
    output wire                                             data_mem_we,

    // Misc
    input wire clk,
    input wire reset
);

    reg [THREAD_INDEX_BITS-1:0] thread_index;


    // Fetch stage inputs
    wire [PC_WIDTH-1:0]             fetch_in_program_counter;

    // Fetch stage internal wires
    wire [THREAD_INDEX_BITS+PC_WIDTH-1:0] fetch_instructio_mem_raddr;

    // Fetch stage outputs
    wire [INSTR_WIDTH-1:0]          fetch_out_instruction;
    wire [THREAD_INDEX_BITS-1:0]    fetch_out_thread_index;

    // Decode stage inputs
    wire [INSTR_WIDTH-1:0]          decode_in_instruction;
    wire [THREAD_INDEX_BITS-1:0]    decode_in_thread_index;
    wire                            decode_in_write_back_enable_flag;
    wire [DATA_WIDTH-1:0]           decode_in_write_back_data;
    wire [REG_INDEX_BITS-1:0]       decode_in_write_back_reg_index;
    wire [THREAD_INDEX_BITS-1:0]    decode_in_write_back_thread_index;


    // Decode stage outputs
    wire                            decode_out_increment_flag;
    wire                            decode_out_load_word_flag;
    wire                            decode_out_store_word_flag;
    wire [REG_INDEX_BITS-1:0]       decode_out_reg_index;
    wire [IMMEDIATE_WIDTH-1:0]      decode_out_immediate;
    wire [DATA_WIDTH-1:0]           decode_out_reg_data;
    wire [THREAD_INDEX_BITS-1:0]    decode_out_thread_index;

    // Ex1 stage inputs
    wire                            ex1_in_increment_flag;
    wire                            ex1_in_load_word_flag;
    wire                            ex1_in_store_word_flag;
    wire [IMMEDIATE_WIDTH-1:0]      ex1_in_immediate;
    wire [REG_INDEX_BITS-1:0]       ex1_in_reg_index;
    wire [DATA_WIDTH-1:0]           ex1_in_reg_data;
    wire [THREAD_INDEX_BITS-1:0]    ex1_in_thread_index;

    // Ex1 stage outputs
    wire                            ex1_out_increment_flag;
    wire                            ex1_out_load_word_flag;
    wire                            ex1_out_store_word_flag;
    wire [IMMEDIATE_WIDTH-1:0]      ex1_out_immediate;
    wire [REG_INDEX_BITS-1:0]       ex1_out_reg_index;
    wire [DATA_WIDTH-1:0]           ex1_out_reg_data;
    wire [THREAD_INDEX_BITS-1:0]    ex1_out_thread_index;

    // Ex2 stage inputs
    wire                            ex2_in_increment_flag;
    wire                            ex2_in_load_word_flag;
    wire                            ex2_in_store_word_flag;
    wire [IMMEDIATE_WIDTH-1:0]      ex2_in_immediate;
    wire [REG_INDEX_BITS-1:0]       ex2_in_reg_index;
    wire [DATA_WIDTH-1:0]           ex2_in_reg_data;
    wire [THREAD_INDEX_BITS-1:0]    ex2_in_thread_index;

    // Ex2 stage outputs
    wire                            ex2_out_increment_flag;
    wire                            ex2_out_load_word_flag;
    wire                            ex2_out_store_word_flag;
    wire [IMMEDIATE_WIDTH-1:0]      ex2_out_immediate;
    wire [REG_INDEX_BITS-1:0]       ex2_out_reg_index;
    wire [DATA_WIDTH-1:0]           ex2_out_data;
    wire [THREAD_INDEX_BITS-1:0]    ex2_out_thread_index;

    // Mem1 stage inputs
    wire                            mem1_in_increment_flag;
    wire                            mem1_in_load_word_flag;
    wire                            mem1_in_store_word_flag;
    wire [IMMEDIATE_WIDTH-1:0]      mem1_in_immediate;
    wire [REG_INDEX_BITS-1:0]       mem1_in_reg_index;
    wire [DATA_WIDTH-1:0]           mem1_in_data;
    wire [THREAD_INDEX_BITS-1:0]    mem1_in_thread_index;

    // Mem1 stage outputs
    wire                            mem1_out_write_back_flag;
    wire [REG_INDEX_BITS-1:0]       mem1_out_reg_index;
    wire [THREAD_INDEX_BITS-1:0]    mem1_out_thread_index;
    wire [DATA_WIDTH-1:0]           mem1_out_data;

    // Mem2 stage inputs
    wire                            mem2_in_write_back_flag;
    wire [REG_INDEX_BITS-1:0]       mem2_in_reg_index;
    wire [THREAD_INDEX_BITS-1:0]    mem2_in_thread_index;
    wire [DATA_WIDTH-1:0]           mem2_in_data;

    // Mem2 stage outputs
    wire                            mem2_out_write_back_flag;
    wire [REG_INDEX_BITS-1:0]       mem2_out_reg_index;
    wire [THREAD_INDEX_BITS-1:0]    mem2_out_thread_index;
    wire [DATA_WIDTH-1:0]           mem2_out_data;

    // Write back stage inputs
    wire                            wb_in_write_back_flag;
    wire [REG_INDEX_BITS-1:0]       wb_in_reg_index;
    wire [THREAD_INDEX_BITS-1:0]    wb_in_thread_index;
    wire [DATA_WIDTH-1:0]           wb_in_data;


    pc_array #(
        .THREAD_INDEX_BITS(THREAD_INDEX_BITS),
        .PC_WIDTH(PC_WIDTH)
    ) pc_array_instance(
        .in_thread_index(thread_index),
        .in_increment_flag(1'b1),
        .out_program_counter(fetch_in_program_counter),
        .clk(clk),
        .reset(reset)
    );

    assign fetch_out_thread_index       = thread_index;
    assign fetch_instructio_mem_raddr   = {fetch_out_thread_index, fetch_in_program_counter};

    assign instr_mem_pc = fetch_instructio_mem_raddr;
    assign fetch_out_instruction = instr_mem_instruction;

    fetch_decode_registers #(
        .INSTR_WIDTH(INSTR_WIDTH),
        .THREAD_INDEX_BITS(THREAD_INDEX_BITS)
    ) fetch_decode_registers_instance(
        .in_instruction(fetch_out_instruction),
        .in_thread_index(fetch_out_thread_index),
        .out_instruction(decode_in_instruction),
        .out_thread_index(decode_in_thread_index),
        .clk(clk),
        .reset(reset)
    );

    decode_stage #(
        .IMMEDIATE_WIDTH(IMMEDIATE_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .REG_INDEX_BITS(REG_INDEX_BITS),
        .THREAD_INDEX_BITS(THREAD_INDEX_BITS),
        .INSTR_WIDTH(INSTR_WIDTH)
    ) decode_stage_instance(
        .in_instruction(decode_in_instruction),
        .in_thread_index(decode_in_thread_index),

        // Write back
        .in_write_back_enable_flag  (decode_in_write_back_enable_flag),
        .in_write_back_data         (decode_in_write_back_data),
        .in_write_back_reg_index    (decode_in_write_back_reg_index),
        .in_write_back_thread_index (decode_in_write_back_thread_index),

        // Register file access
        .reg_access_rdata           (reg_access_rdata),
        .reg_access_raddr           (reg_access_raddr),
        .reg_access_waddr           (reg_access_waddr),
        .reg_access_wdata           (reg_access_wdata),
        .reg_access_we              (reg_access_we),

        // Pipeline outputs
        .out_increment_flag         (decode_out_increment_flag),
        .out_load_word_flag         (decode_out_load_word_flag),
        .out_store_word_flag        (decode_out_store_word_flag),
        .out_reg_index              (decode_out_reg_index),
        .out_immediate              (decode_out_immediate),
        .out_reg_data               (decode_out_reg_data),
        .out_thread_index           (decode_out_thread_index),

        // Misc
        .clk                        (clk)
    );

    decode_ex1_registers #(
        .IMMEDIATE_WIDTH(IMMEDIATE_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .REG_INDEX_BITS(REG_INDEX_BITS),
        .THREAD_INDEX_BITS(THREAD_INDEX_BITS)
    ) decode_ex1_registers_instance(
        .in_increment_flag(decode_out_increment_flag),
        .in_load_word_flag(decode_out_load_word_flag),
        .in_store_word_flag(decode_out_store_word_flag),
        .in_immediate(decode_out_immediate),
        .in_reg_data(decode_out_reg_data),
        .in_reg_index(decode_out_reg_index),
        .in_thread_index(decode_out_thread_index),
        .out_increment_flag(ex1_in_increment_flag),
        .out_load_word_flag(ex1_in_load_word_flag),
        .out_store_word_flag(ex1_in_store_word_flag),
        .out_immediate(ex1_in_immediate),
        .out_reg_index(ex1_in_reg_index),
        .out_thread_index(ex1_in_thread_index),
        .out_reg_data(ex1_in_reg_data),
        .clk(clk),
        .reset(reset)
    );

    // Ex1 stage is current dummy
    assign ex1_out_increment_flag   = ex1_in_increment_flag;
    assign ex1_out_load_word_flag   = ex1_in_load_word_flag;
    assign ex1_out_store_word_flag  = ex1_in_store_word_flag;
    assign ex1_out_immediate        = ex1_in_immediate;
    assign ex1_out_reg_index        = ex1_in_reg_index;
    assign ex1_out_reg_data         = ex1_in_reg_data;
    assign ex1_out_thread_index     = ex1_in_thread_index;

    ex1_ex2_registers #(
        .IMMEDIATE_WIDTH(IMMEDIATE_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .REG_INDEX_BITS(REG_INDEX_BITS),
        .THREAD_INDEX_BITS(THREAD_INDEX_BITS)
    ) ex1_ex2_registers_instance(
        .in_increment_flag          (ex1_out_increment_flag),
        .in_load_word_flag          (ex1_out_load_word_flag),
        .in_store_word_flag         (ex1_out_store_word_flag),
        .in_immediate               (ex1_out_immediate),
        .in_thread_index            (ex1_out_thread_index),
        .in_reg_index               (ex1_out_reg_index),
        .in_reg_data                (ex1_out_reg_data),
        .out_increment_flag         (ex2_in_increment_flag),
        .out_load_word_flag         (ex2_in_load_word_flag),
        .out_store_word_flag        (ex2_in_store_word_flag),
        .out_immediate              (ex2_in_immediate),
        .out_thread_index           (ex2_in_thread_index),
        .out_reg_index              (ex2_in_reg_index),
        .out_reg_data               (ex2_in_reg_data),
        .clk                        (clk),
        .reset                      (reset)
    );

    ex2_stage #(
        .IMMEDIATE_WIDTH(IMMEDIATE_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .REG_INDEX_BITS(REG_INDEX_BITS),
        .THREAD_INDEX_BITS(THREAD_INDEX_BITS)
    ) ex2_stage_instance(
        .in_increment_flag      (ex2_in_increment_flag),
        .in_load_word_flag      (ex2_in_load_word_flag),
        .in_store_word_flag     (ex2_in_store_word_flag),
        .in_immediate           (ex2_in_immediate),
        .in_thread_index        (ex2_in_thread_index),
        .in_reg_index           (ex2_in_reg_index),
        .in_reg_data            (ex2_in_reg_data),
        .out_increment_flag     (ex2_out_increment_flag),
        .out_load_word_flag     (ex2_out_load_word_flag),
        .out_store_word_flag    (ex2_out_store_word_flag),
        .out_immediate          (ex2_out_immediate),
        .out_thread_index       (ex2_out_thread_index),
        .out_reg_index          (ex2_out_reg_index),
        .out_data               (ex2_out_data)
    );

    ex2_mem1_registers #(
        .IMMEDIATE_WIDTH(IMMEDIATE_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .REG_INDEX_BITS(REG_INDEX_BITS),
        .THREAD_INDEX_BITS(THREAD_INDEX_BITS)
    ) ex2_mem1_registers_instance(
        .in_increment_flag      (ex2_out_increment_flag),
        .in_load_word_flag      (ex2_out_load_word_flag),
        .in_store_word_flag     (ex2_out_store_word_flag),
        .in_immediate           (ex2_out_immediate),
        .in_thread_index        (ex2_out_thread_index),
        .in_reg_index           (ex2_out_reg_index),
        .in_data                (ex2_out_data),
        .out_increment_flag     (mem1_in_increment_flag),
        .out_load_word_flag     (mem1_in_load_word_flag),
        .out_store_word_flag    (mem1_in_store_word_flag),
        .out_immediate          (mem1_in_immediate),
        .out_thread_index       (mem1_in_thread_index),
        .out_reg_index          (mem1_in_reg_index),
        .out_data               (mem1_in_data),
        .clk                    (clk),
        .reset                  (reset)
    );

    mem1_stage #(
        .IMMEDIATE_WIDTH(IMMEDIATE_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .REG_INDEX_BITS(REG_INDEX_BITS),
        .THREAD_INDEX_BITS(THREAD_INDEX_BITS),
        .DATA_MEM_ADDR_BITS(DATA_MEM_ADDR_BITS)
    ) mem1_stage_instance(
        .in_increment_flag          (mem1_in_increment_flag),
        .in_load_word_flag          (mem1_in_load_word_flag),
        .in_store_word_flag         (mem1_in_store_word_flag),
        .in_immediate               (mem1_in_immediate),
        .in_thread_index            (mem1_in_thread_index),
        .in_reg_index               (mem1_in_reg_index),
        .in_data                    (mem1_in_data),

        .data_mem_raddr             (data_mem_raddr),
        .data_mem_rdata             (data_mem_rdata),
        .data_mem_waddr             (data_mem_waddr),
        .data_mem_wdata             (data_mem_wdata),
        .data_mem_we                (data_mem_we),

        .out_write_back_flag        (mem1_out_write_back_flag),
        .out_reg_index              (mem1_out_reg_index),
        .out_thread_index           (mem1_out_thread_index),
        .out_data                   (mem1_out_data),
        .clk                        (clk)
    );

    mem1_mem2_registers #(
        .DATA_WIDTH(DATA_WIDTH),
        .REG_INDEX_BITS(REG_INDEX_BITS),
        .THREAD_INDEX_BITS(THREAD_INDEX_BITS)
    ) mem1_mem2_registers_instance(

        .in_write_back_flag         (mem1_out_write_back_flag),
        .in_reg_index               (mem1_out_reg_index),
        .in_thread_index            (mem1_out_thread_index),
        .in_data                    (mem1_out_data),

        .out_write_back_flag        (mem2_in_write_back_flag),
        .out_reg_index              (mem2_in_reg_index),
        .out_thread_index           (mem2_in_thread_index),
        .out_data                   (mem2_in_data),

        .clk                        (clk),
        .reset                      (reset)
    );

    mem2_stage #(
        .DATA_WIDTH(DATA_WIDTH),
        .REG_INDEX_BITS(REG_INDEX_BITS),
        .THREAD_INDEX_BITS(THREAD_INDEX_BITS)
    ) mem2_stage_instance(
        .in_write_back_flag             (mem2_in_write_back_flag),
        .in_reg_index                   (mem2_in_reg_index),
        .in_thread_index                (mem2_in_thread_index),
        .in_data                        (mem2_in_data),
        .out_write_back_flag            (mem2_out_write_back_flag),
        .out_reg_index                  (mem2_out_reg_index),
        .out_thread_index               (mem2_out_thread_index),
        .out_data                       (mem2_out_data)
    );

    mem2_wb_registers #(
        .DATA_WIDTH(DATA_WIDTH),
        .REG_INDEX_BITS(REG_INDEX_BITS),
        .THREAD_INDEX_BITS(THREAD_INDEX_BITS)
    ) mem2_wb_registers_instance(

        .in_write_back_flag         (mem2_out_write_back_flag),
        .in_reg_index               (mem2_out_reg_index),
        .in_thread_index            (mem2_out_thread_index),
        .in_data                    (mem2_out_data),

        .out_write_back_flag        (wb_in_write_back_flag),
        .out_reg_index              (wb_in_reg_index),
        .out_thread_index           (wb_in_thread_index),
        .out_data                   (wb_in_data),

        .clk                        (clk),
        .reset                      (reset)
    );

    // Write back stage writes back data into the register file living in the decode stage
    assign decode_in_write_back_enable_flag     = wb_in_write_back_flag;
    assign decode_in_write_back_data            = wb_in_data;
    assign decode_in_write_back_reg_index       = wb_in_reg_index;
    assign decode_in_write_back_thread_index    = wb_in_thread_index;

endmodule
