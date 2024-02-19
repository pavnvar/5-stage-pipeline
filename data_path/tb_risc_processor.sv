`timescale 1ns/1ps

module tb_risc_processor;

    localparam PC_WIDTH = 8;
    localparam INSTR_WIDTH = 32;
    localparam THREAD_INDEX_BITS = 3;
    localparam IMMEDIATE_WIDTH = 16;
    localparam DATA_WIDTH = 64;
    localparam REG_INDEX_BITS = 5;
    localparam DATA_MEM_ADDR_BITS = 8;

    reg clk;
    reg reset;

    initial begin
        clk = 0;
        forever begin
            #5 clk = ~clk;
        end
    end

    // ============================================
    // Instruction memory wires and logic
    // ============================================

    wire [THREAD_INDEX_BITS+PC_WIDTH-1:0] instr_mem_raddr;
    reg [INSTR_WIDTH-1:0] instr_mem_rdata;
    reg [INSTR_WIDTH-1:0] instr_mem_bram [2**(THREAD_INDEX_BITS+PC_WIDTH)-1:0];

    always @(posedge clk) begin
        instr_mem_rdata <= instr_mem_bram[instr_mem_raddr];
    end
    
    function logic [INSTR_WIDTH-1:0] make_instruction_load_word_imm (
        input logic [IMMEDIATE_WIDTH-1:0] addr_imm,
        input logic [REG_INDEX_BITS-1:0] target_register);
        begin
            return { 5'b0, addr_imm, target_register, 6'b000010 };
        end
    endfunction

    function logic [INSTR_WIDTH-1:0] make_instruction_store_word_imm (
        input logic [IMMEDIATE_WIDTH-1:0] addr_imm,
        input logic [REG_INDEX_BITS-1:0] source_register);
        begin
            return { 5'b0, addr_imm, source_register, 6'b000011 };
        end
    endfunction

    function logic [INSTR_WIDTH-1:0] make_instruction_increment (
        input logic [IMMEDIATE_WIDTH-1:0] value_imm,
        input logic [REG_INDEX_BITS-1:0] target_register);
        begin
            return { 5'b0, value_imm, target_register, 6'b000001 };
        end
    endfunction

    task clear_instruction_memory();
        begin
            automatic integer i;
            for (i = 0; i < 2**(THREAD_INDEX_BITS+PC_WIDTH); i = i + 1) begin
                instr_mem_bram[i] = 'h0;
            end
        end
    endtask

    task set_instruction (
        input logic [THREAD_INDEX_BITS-1:0] thread_id,
        input logic [PC_WIDTH-1:0] pc,
        input logic [INSTR_WIDTH-1:0] instruction);
        begin
            instr_mem_bram[{thread_id, pc}] <= instruction;
        end
    endtask

    // ============================================
    // Data memory wires and logic
    // ============================================

    wire [THREAD_INDEX_BITS+DATA_MEM_ADDR_BITS-1:0] data_mem_raddr;
    logic [DATA_WIDTH-1:0]                          data_mem_rdata;
    wire [THREAD_INDEX_BITS+DATA_MEM_ADDR_BITS-1:0] data_mem_waddr;
    logic [DATA_WIDTH-1:0]                          data_mem_wdata;
    logic                                           data_mem_we;
    logic [DATA_WIDTH-1:0] data_mem_bram [2**(THREAD_INDEX_BITS+DATA_MEM_ADDR_BITS)-1:0];

    always @(posedge clk) begin
        if (data_mem_we) begin
            data_mem_bram[data_mem_raddr] <= data_mem_wdata;
        end

        data_mem_rdata <= data_mem_bram[data_mem_raddr];
    end

    task clear_data_memory();
        begin
            automatic integer i;
            for (i = 0; i < 2**(THREAD_INDEX_BITS+DATA_MEM_ADDR_BITS); i = i + 1) begin
                data_mem_bram[i] = 'h0;
            end
        end
    endtask

    // ============================================
    // Register file wires and logic
    // ============================================

    logic [THREAD_INDEX_BITS+REG_INDEX_BITS-1:0] regfile_raddr;
    logic [DATA_WIDTH-1:0] regfile_rdata;
    logic [THREAD_INDEX_BITS+REG_INDEX_BITS-1:0] regfile_waddr;
    logic [DATA_WIDTH-1:0] regfile_wdata;
    logic regfile_we;
    logic [DATA_WIDTH-1:0] regfile_bram [2**(THREAD_INDEX_BITS+REG_INDEX_BITS)-1:0];

    always @(posedge clk) begin
        if (regfile_we) begin
            regfile_bram[regfile_raddr] <= regfile_wdata;
        end

        regfile_rdata <= regfile_bram[regfile_raddr];
    end

    // ============================================
    // Design under test
    // ============================================
    risc_processor #(
        .PC_WIDTH(PC_WIDTH),
        .INSTR_WIDTH(INSTR_WIDTH),
        .THREAD_INDEX_BITS(THREAD_INDEX_BITS),
        .IMMEDIATE_WIDTH(IMMEDIATE_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .REG_INDEX_BITS(REG_INDEX_BITS),
        .DATA_MEM_ADDR_BITS(DATA_MEM_ADDR_BITS)
    ) dut (
        .reg_access_rdata           (regfile_rdata),
        .reg_access_raddr           (regfile_raddr),
        .reg_access_waddr           (regfile_waddr),
        .reg_access_wdata           (regfile_wdata),
        .reg_access_we              (regfile_we),
        .instr_mem_pc               (instr_mem_raddr),
        .instr_mem_instruction      (instr_mem_rdata),
        .data_mem_raddr             (data_mem_raddr),
        .data_mem_rdata             (data_mem_rdata),
        .data_mem_waddr             (data_mem_waddr),
        .data_mem_wdata             (data_mem_wdata),
        .data_mem_we                (data_mem_we),
        .clk                        (clk),
        .reset                      (reset)
    );


    initial begin

        reset = 1;
        clear_instruction_memory();
        clear_data_memory();
        set_instruction(0, 0, make_instruction_load_word_imm(4 * 1, 7));
        set_instruction(0, 1, make_instruction_increment(1, 7));
        set_instruction(0, 2, make_instruction_store_word_imm(4 * 2, 7));
        @(posedge clk);
        #1;
        @(posedge clk);
        #1;
        reset = 0;

        #200;

        $stop;

    end


endmodule

