`timescale 1ns / 1ps

module logicalshift_64bit_tb;

    // Inputs
    reg [63:0] data;
    reg [5:0] shift_amount;

    // Outputs
    wire [63:0] shifted_data;

    // Instantiate the Unit Under Test (UUT)
    logicalshift_64bit uut (
        .data(data),
        .shift_amount(shift_amount),
        .shifted_data(shifted_data)
    );

    // Testbench stimulus
    initial begin
        // Initialize Inputs
        data = 64'hAAAA_BBBB_CCCC_DDDD; // Initial data
        shift_amount = 0; // Shift amount
		  #100
        data = 64'hAAAA_BBBB_CCCC_DDDD; // Initial data
        shift_amount = 1; // Shift amount
		  #100

        data = 64'hAAAA_BBBB_CCCC_DDDD; // Initial data
        shift_amount = 2; // Shift amount
		  #100
      

        // Monitor outputs
        $display("Data=%h Shifted Data=%h", data, shifted_data);

        // Stop simulation after some time
        #5000 $stop;
    end

endmodule
