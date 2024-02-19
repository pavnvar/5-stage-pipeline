vlib work
vmap work work

vlog -work work decode_ex1_registers.v
vlog -work work decode_stage.v
vlog -work work ex1_ex2_registers.v
vlog -work work ex2_mem1_registers.v
vlog -work work ex2_stage.v
vlog -work work fetch_decode_registers.v
vlog -work work mem1_mem2_registers.v
vlog -work work mem1_stage.v
vlog -work work mem2_stage.v
vlog -work work mem2_wb_registers.v
vlog -work work pc_array.v
vlog -work work register_file.v
vlog -work work mem2_wb_registers.v
vlog -work work risc_processor.v
vlog -work work sign_extender.v

vlog -work work tb_risc_processor.sv

vsim -novopt work.tb_risc_processor

add wave \
{sim:/tb_risc_processor/clk} \

add wave \
{sim:/tb_risc_processor/reset} \

add wave -group "PC Array" -position end \
-label "Thread 0" {sim:/tb_risc_processor/dut/pc_array_instance/program_counter[0]} \
-label "Thread 1" {sim:/tb_risc_processor/dut/pc_array_instance/program_counter[1]} \
-label "Thread 2" {sim:/tb_risc_processor/dut/pc_array_instance/program_counter[2]} \
-label "Thread 3" {sim:/tb_risc_processor/dut/pc_array_instance/program_counter[3]} \
-label "Thread 4" {sim:/tb_risc_processor/dut/pc_array_instance/program_counter[4]} \
-label "Thread 5" {sim:/tb_risc_processor/dut/pc_array_instance/program_counter[5]} \
-label "Thread 6" {sim:/tb_risc_processor/dut/pc_array_instance/program_counter[6]} \
-label "Thread 7" {sim:/tb_risc_processor/dut/pc_array_instance/program_counter[7]}

add wave -label "Instruction Fetch Address" {sim:/tb_risc_processor/instr_mem_raddr}

add wave -group "Register Indices" -position end \
-label "Decode Stage Output"    {sim:/tb_risc_processor/dut/decode_out_reg_index} \
-label "Ex1 Input"              {sim:/tb_risc_processor/dut/ex1_in_reg_index} \
-label "Ex2 Output"             {sim:/tb_risc_processor/dut/ex2_out_reg_index} \
-label "Mem1 Output"            {sim:/tb_risc_processor/dut/mem1_out_reg_index} \
-label "Mem2 Output"            {sim:/tb_risc_processor/dut/mem2_out_reg_index} \
-label "WB Stage"               {sim:/tb_risc_processor/dut/wb_in_reg_index}

add wave -group "Thread indices" -position end \
-label "Decode Stage Output"    {sim:/tb_risc_processor/dut/decode_out_thread_index} \
-label "Ex1 Input"              {sim:/tb_risc_processor/dut/ex1_in_thread_index} \
-label "Ex2 Output"             {sim:/tb_risc_processor/dut/ex2_out_thread_index} \
-label "Mem1 Output"            {sim:/tb_risc_processor/dut/mem1_out_thread_index} \
-label "Mem2 Output"            {sim:/tb_risc_processor/dut/mem2_out_thread_index} \
-label "WB Stage"               {sim:/tb_risc_processor/dut/wb_in_thread_index}

add wave -group "Increment Flag" -position end \
-label "Decode Stage Output"    {sim:/tb_risc_processor/dut/decode_out_increment_flag} \
-label "Ex1 Stage Input"        {sim:/tb_risc_processor/dut/ex1_in_increment_flag} \
-label "Ex2 Stage Input"        {sim:/tb_risc_processor/dut/ex2_in_increment_flag} \
-label "Mem1 Stage Input"       {sim:/tb_risc_processor/dut/mem1_in_increment_flag}

add wave -group "Data Mem Signals" -position end \
-label "Data Mem Read Address" {sim:/tb_risc_processor/data_mem_raddr} \
-label "Data Mem Write Address" {sim:/tb_risc_processor/data_mem_waddr} \
-label "Data Mem Write Data" {sim:/tb_risc_processor/data_mem_wdata} \
-label "Data Mem Write Enable" {sim:/tb_risc_processor/data_mem_we}

add wave -group "Load Word Flag" -position end \
-label "Decode Stage Output"    {sim:/tb_risc_processor/dut/decode_out_load_word_flag} \
-label "Ex1 Stage Input"        {sim:/tb_risc_processor/dut/ex1_in_load_word_flag} \
-label "Ex2 Stage Input"        {sim:/tb_risc_processor/dut/ex2_in_load_word_flag} \
-label "Mem1 Stage Input"       {sim:/tb_risc_processor/dut/mem1_in_load_word_flag}

add wave -group "Register Data BUS" -position end \
-label "Decode Stage Output"    {sim:/tb_risc_processor/dut/decode_out_reg_data} \
-label "Ex1 Stage Input"        {sim:/tb_risc_processor/dut/ex1_in_reg_data} \
-label "Ex2 Stage Input"        {sim:/tb_risc_processor/dut/ex2_in_reg_data} \
-label "Mem1 Stage Input"       {sim:/tb_risc_processor/dut/mem1_in_reg_data} \
-label "Mem2 Stage Input"       {sim:/tb_risc_processor/dut/mem2_in_reg_data} \

add wave -group "Final Data BUS" -position end \
-label "Mem2 Stage Output Data"      {sim:/tb_risc_processor/dut/mem2_out_data} \
-label "WB Stage Input Data"         {sim:/tb_risc_processor/dut/wb_in_data}


add wave -label "Op Code"               {sim:/tb_risc_processor/dut/decode_stage_instance/opcode}

add wave -label "Register File WE"      {sim:/tb_risc_processor/regfile_we}
add wave -label "Register File Waddr"   {sim:/tb_risc_processor/regfile_waddr}
add wave -label "Register File Wdata"   {sim:/tb_risc_processor/regfile_wdata}

# add wave -label "Mem1 bram out data"    {sim:/tb_risc_processor/dut/mem1_stage_instance/bram_out_data}
# add wave -label "Mem1 load word flag"    {sim:/tb_risc_processor/dut/mem1_stage_instance/in_load_word_flag}
# add wave -label "Mem1 true out data"    {sim:/tb_risc_processor/dut/mem1_stage_instance/out_data}

run -all
