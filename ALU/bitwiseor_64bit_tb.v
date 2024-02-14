`timescale 1ns / 1ps

module bitwiseor_64bit_tb;

    // Inputs
    reg [63:0] A;
    reg [63:0] B;

    // Outputs
    wire [63:0] out;

    // Instantiate the Unit Under Test (UUT)
    bitwiseor_64bit uut (
        .A(A),
        .B(B),
        .out(out)
    );

    // Testbench stimulus
    initial begin
        // Initialize Inputs
        #10 A = 64'hAAAA_BBBB_CCCC_DDDD;
        #10 B = 64'h1111_2222_3333_4444;


        // Apply stimulus
        #10 A = 64'hFFFF_FFFF_FFFF_FFFF;
        #10 B = 64'h0000_0000_0000_0001;

        // Monitor outputs
        $display("A=%h B=%h Out=%h", A, B, out);

        // Stop simulation after some time
        #200 $stop;
    end

endmodule
