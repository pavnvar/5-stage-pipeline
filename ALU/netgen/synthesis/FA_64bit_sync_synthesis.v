////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2008 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: K.31
//  \   \         Application: netgen
//  /   /         Filename: FA_64bit_sync_synthesis.v
// /___/   /\     Timestamp: Tue Feb 13 23:03:50 2024
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim FA_64bit_sync.ngc FA_64bit_sync_synthesis.v 
// Device	: xc2vp30-6-fg676
// Input file	: FA_64bit_sync.ngc
// Output file	: C:\Xilinx\ALU\netgen\synthesis\FA_64bit_sync_synthesis.v
// # of Modules	: 1
// Design Name	: FA_64bit_sync
// Xilinx        : C:\Xilinx\10.1\ISE
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Development System Reference Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module FA_64bit_sync (
  Carry, Cin, Sum, A, B
);
  output Carry;
  input Cin;
  output [63 : 0] Sum;
  input [63 : 0] A;
  input [63 : 0] B;
  wire A_0_IBUF_64;
  wire A_10_IBUF_65;
  wire A_11_IBUF_66;
  wire A_12_IBUF_67;
  wire A_13_IBUF_68;
  wire A_14_IBUF_69;
  wire A_15_IBUF_70;
  wire A_16_IBUF_71;
  wire A_17_IBUF_72;
  wire A_18_IBUF_73;
  wire A_19_IBUF_74;
  wire A_1_IBUF_75;
  wire A_20_IBUF_76;
  wire A_21_IBUF_77;
  wire A_22_IBUF_78;
  wire A_23_IBUF_79;
  wire A_24_IBUF_80;
  wire A_25_IBUF_81;
  wire A_26_IBUF_82;
  wire A_27_IBUF_83;
  wire A_28_IBUF_84;
  wire A_29_IBUF_85;
  wire A_2_IBUF_86;
  wire A_30_IBUF_87;
  wire A_31_IBUF_88;
  wire A_32_IBUF_89;
  wire A_33_IBUF_90;
  wire A_34_IBUF_91;
  wire A_35_IBUF_92;
  wire A_36_IBUF_93;
  wire A_37_IBUF_94;
  wire A_38_IBUF_95;
  wire A_39_IBUF_96;
  wire A_3_IBUF_97;
  wire A_40_IBUF_98;
  wire A_41_IBUF_99;
  wire A_42_IBUF_100;
  wire A_43_IBUF_101;
  wire A_44_IBUF_102;
  wire A_45_IBUF_103;
  wire A_46_IBUF_104;
  wire A_47_IBUF_105;
  wire A_48_IBUF_106;
  wire A_49_IBUF_107;
  wire A_4_IBUF_108;
  wire A_50_IBUF_109;
  wire A_51_IBUF_110;
  wire A_52_IBUF_111;
  wire A_53_IBUF_112;
  wire A_54_IBUF_113;
  wire A_55_IBUF_114;
  wire A_56_IBUF_115;
  wire A_57_IBUF_116;
  wire A_58_IBUF_117;
  wire A_59_IBUF_118;
  wire A_5_IBUF_119;
  wire A_60_IBUF_120;
  wire A_61_IBUF_121;
  wire A_62_IBUF_122;
  wire A_63_IBUF_123;
  wire A_6_IBUF_124;
  wire A_7_IBUF_125;
  wire A_8_IBUF_126;
  wire A_9_IBUF_127;
  wire B_0_IBUF_192;
  wire B_10_IBUF_193;
  wire B_11_IBUF_194;
  wire B_12_IBUF_195;
  wire B_13_IBUF_196;
  wire B_14_IBUF_197;
  wire B_15_IBUF_198;
  wire B_16_IBUF_199;
  wire B_17_IBUF_200;
  wire B_18_IBUF_201;
  wire B_19_IBUF_202;
  wire B_1_IBUF_203;
  wire B_20_IBUF_204;
  wire B_21_IBUF_205;
  wire B_22_IBUF_206;
  wire B_23_IBUF_207;
  wire B_24_IBUF_208;
  wire B_25_IBUF_209;
  wire B_26_IBUF_210;
  wire B_27_IBUF_211;
  wire B_28_IBUF_212;
  wire B_29_IBUF_213;
  wire B_2_IBUF_214;
  wire B_30_IBUF_215;
  wire B_31_IBUF_216;
  wire B_32_IBUF_217;
  wire B_33_IBUF_218;
  wire B_34_IBUF_219;
  wire B_35_IBUF_220;
  wire B_36_IBUF_221;
  wire B_37_IBUF_222;
  wire B_38_IBUF_223;
  wire B_39_IBUF_224;
  wire B_3_IBUF_225;
  wire B_40_IBUF_226;
  wire B_41_IBUF_227;
  wire B_42_IBUF_228;
  wire B_43_IBUF_229;
  wire B_44_IBUF_230;
  wire B_45_IBUF_231;
  wire B_46_IBUF_232;
  wire B_47_IBUF_233;
  wire B_48_IBUF_234;
  wire B_49_IBUF_235;
  wire B_4_IBUF_236;
  wire B_50_IBUF_237;
  wire B_51_IBUF_238;
  wire B_52_IBUF_239;
  wire B_53_IBUF_240;
  wire B_54_IBUF_241;
  wire B_55_IBUF_242;
  wire B_56_IBUF_243;
  wire B_57_IBUF_244;
  wire B_58_IBUF_245;
  wire B_59_IBUF_246;
  wire B_5_IBUF_247;
  wire B_60_IBUF_248;
  wire B_61_IBUF_249;
  wire B_62_IBUF_250;
  wire B_63_IBUF_251;
  wire B_6_IBUF_252;
  wire B_7_IBUF_253;
  wire B_8_IBUF_254;
  wire B_9_IBUF_255;
  wire Sum_0_OBUF_321;
  wire Sum_10_OBUF_322;
  wire Sum_11_OBUF_323;
  wire Sum_12_OBUF_324;
  wire Sum_13_OBUF_325;
  wire Sum_14_OBUF_326;
  wire Sum_15_OBUF_327;
  wire Sum_16_OBUF_328;
  wire Sum_17_OBUF_329;
  wire Sum_18_OBUF_330;
  wire Sum_19_OBUF_331;
  wire Sum_1_OBUF_332;
  wire Sum_20_OBUF_333;
  wire Sum_21_OBUF_334;
  wire Sum_22_OBUF_335;
  wire Sum_23_OBUF_336;
  wire Sum_24_OBUF_337;
  wire Sum_25_OBUF_338;
  wire Sum_26_OBUF_339;
  wire Sum_27_OBUF_340;
  wire Sum_28_OBUF_341;
  wire Sum_29_OBUF_342;
  wire Sum_2_OBUF_343;
  wire Sum_30_OBUF_344;
  wire Sum_31_OBUF_345;
  wire Sum_32_OBUF_346;
  wire Sum_33_OBUF_347;
  wire Sum_34_OBUF_348;
  wire Sum_35_OBUF_349;
  wire Sum_36_OBUF_350;
  wire Sum_37_OBUF_351;
  wire Sum_38_OBUF_352;
  wire Sum_39_OBUF_353;
  wire Sum_3_OBUF_354;
  wire Sum_40_OBUF_355;
  wire Sum_41_OBUF_356;
  wire Sum_42_OBUF_357;
  wire Sum_43_OBUF_358;
  wire Sum_44_OBUF_359;
  wire Sum_45_OBUF_360;
  wire Sum_46_OBUF_361;
  wire Sum_47_OBUF_362;
  wire Sum_48_OBUF_363;
  wire Sum_49_OBUF_364;
  wire Sum_4_OBUF_365;
  wire Sum_50_OBUF_366;
  wire Sum_51_OBUF_367;
  wire Sum_52_OBUF_368;
  wire Sum_53_OBUF_369;
  wire Sum_54_OBUF_370;
  wire Sum_55_OBUF_371;
  wire Sum_56_OBUF_372;
  wire Sum_57_OBUF_373;
  wire Sum_58_OBUF_374;
  wire Sum_59_OBUF_375;
  wire Sum_5_OBUF_376;
  wire Sum_60_OBUF_377;
  wire Sum_61_OBUF_378;
  wire Sum_62_OBUF_379;
  wire Sum_63_OBUF_380;
  wire Sum_6_OBUF_381;
  wire Sum_7_OBUF_382;
  wire Sum_8_OBUF_383;
  wire Sum_9_OBUF_384;
  wire [63 : 1] inter_carry;
  LUT2 #(
    .INIT ( 4'h6 ))
  \genFA[0].first_1_bit_adder.instance_name/Mxor_xor1_Result1  (
    .I0(B_0_IBUF_192),
    .I1(A_0_IBUF_64),
    .O(Sum_0_OBUF_321)
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[9].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_9_IBUF_255),
    .I1(inter_carry[8]),
    .I2(A_9_IBUF_127),
    .O(inter_carry[9])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[8].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_8_IBUF_254),
    .I1(inter_carry[7]),
    .I2(A_8_IBUF_126),
    .O(inter_carry[8])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[7].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_7_IBUF_253),
    .I1(inter_carry[6]),
    .I2(A_7_IBUF_125),
    .O(inter_carry[7])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[6].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_6_IBUF_252),
    .I1(inter_carry[5]),
    .I2(A_6_IBUF_124),
    .O(inter_carry[6])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[63].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_63_IBUF_251),
    .I1(inter_carry[62]),
    .I2(A_63_IBUF_123),
    .O(inter_carry[63])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[62].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_62_IBUF_250),
    .I1(inter_carry[61]),
    .I2(A_62_IBUF_122),
    .O(inter_carry[62])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[61].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_61_IBUF_249),
    .I1(inter_carry[60]),
    .I2(A_61_IBUF_121),
    .O(inter_carry[61])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[60].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_60_IBUF_248),
    .I1(inter_carry[59]),
    .I2(A_60_IBUF_120),
    .O(inter_carry[60])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[5].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_5_IBUF_247),
    .I1(inter_carry[4]),
    .I2(A_5_IBUF_119),
    .O(inter_carry[5])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[59].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_59_IBUF_246),
    .I1(inter_carry[58]),
    .I2(A_59_IBUF_118),
    .O(inter_carry[59])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[58].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_58_IBUF_245),
    .I1(inter_carry[57]),
    .I2(A_58_IBUF_117),
    .O(inter_carry[58])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[57].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_57_IBUF_244),
    .I1(inter_carry[56]),
    .I2(A_57_IBUF_116),
    .O(inter_carry[57])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[56].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_56_IBUF_243),
    .I1(inter_carry[55]),
    .I2(A_56_IBUF_115),
    .O(inter_carry[56])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[55].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_55_IBUF_242),
    .I1(inter_carry[54]),
    .I2(A_55_IBUF_114),
    .O(inter_carry[55])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[54].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_54_IBUF_241),
    .I1(inter_carry[53]),
    .I2(A_54_IBUF_113),
    .O(inter_carry[54])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[53].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_53_IBUF_240),
    .I1(inter_carry[52]),
    .I2(A_53_IBUF_112),
    .O(inter_carry[53])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[52].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_52_IBUF_239),
    .I1(inter_carry[51]),
    .I2(A_52_IBUF_111),
    .O(inter_carry[52])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[51].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_51_IBUF_238),
    .I1(inter_carry[50]),
    .I2(A_51_IBUF_110),
    .O(inter_carry[51])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[50].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_50_IBUF_237),
    .I1(inter_carry[49]),
    .I2(A_50_IBUF_109),
    .O(inter_carry[50])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[4].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_4_IBUF_236),
    .I1(inter_carry[3]),
    .I2(A_4_IBUF_108),
    .O(inter_carry[4])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[49].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_49_IBUF_235),
    .I1(inter_carry[48]),
    .I2(A_49_IBUF_107),
    .O(inter_carry[49])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[48].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_48_IBUF_234),
    .I1(inter_carry[47]),
    .I2(A_48_IBUF_106),
    .O(inter_carry[48])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[47].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_47_IBUF_233),
    .I1(inter_carry[46]),
    .I2(A_47_IBUF_105),
    .O(inter_carry[47])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[46].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_46_IBUF_232),
    .I1(inter_carry[45]),
    .I2(A_46_IBUF_104),
    .O(inter_carry[46])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[45].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_45_IBUF_231),
    .I1(inter_carry[44]),
    .I2(A_45_IBUF_103),
    .O(inter_carry[45])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[44].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_44_IBUF_230),
    .I1(inter_carry[43]),
    .I2(A_44_IBUF_102),
    .O(inter_carry[44])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[43].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_43_IBUF_229),
    .I1(inter_carry[42]),
    .I2(A_43_IBUF_101),
    .O(inter_carry[43])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[42].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_42_IBUF_228),
    .I1(inter_carry[41]),
    .I2(A_42_IBUF_100),
    .O(inter_carry[42])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[41].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_41_IBUF_227),
    .I1(inter_carry[40]),
    .I2(A_41_IBUF_99),
    .O(inter_carry[41])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[40].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_40_IBUF_226),
    .I1(inter_carry[39]),
    .I2(A_40_IBUF_98),
    .O(inter_carry[40])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[3].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_3_IBUF_225),
    .I1(inter_carry[2]),
    .I2(A_3_IBUF_97),
    .O(inter_carry[3])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[39].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_39_IBUF_224),
    .I1(inter_carry[38]),
    .I2(A_39_IBUF_96),
    .O(inter_carry[39])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[38].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_38_IBUF_223),
    .I1(inter_carry[37]),
    .I2(A_38_IBUF_95),
    .O(inter_carry[38])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[37].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_37_IBUF_222),
    .I1(inter_carry[36]),
    .I2(A_37_IBUF_94),
    .O(inter_carry[37])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[36].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_36_IBUF_221),
    .I1(inter_carry[35]),
    .I2(A_36_IBUF_93),
    .O(inter_carry[36])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[35].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_35_IBUF_220),
    .I1(inter_carry[34]),
    .I2(A_35_IBUF_92),
    .O(inter_carry[35])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[34].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_34_IBUF_219),
    .I1(inter_carry[33]),
    .I2(A_34_IBUF_91),
    .O(inter_carry[34])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[33].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_33_IBUF_218),
    .I1(inter_carry[32]),
    .I2(A_33_IBUF_90),
    .O(inter_carry[33])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[32].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_32_IBUF_217),
    .I1(inter_carry[31]),
    .I2(A_32_IBUF_89),
    .O(inter_carry[32])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[31].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_31_IBUF_216),
    .I1(inter_carry[30]),
    .I2(A_31_IBUF_88),
    .O(inter_carry[31])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[30].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_30_IBUF_215),
    .I1(inter_carry[29]),
    .I2(A_30_IBUF_87),
    .O(inter_carry[30])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[2].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_2_IBUF_214),
    .I1(inter_carry[1]),
    .I2(A_2_IBUF_86),
    .O(inter_carry[2])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[29].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_29_IBUF_213),
    .I1(inter_carry[28]),
    .I2(A_29_IBUF_85),
    .O(inter_carry[29])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[28].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_28_IBUF_212),
    .I1(inter_carry[27]),
    .I2(A_28_IBUF_84),
    .O(inter_carry[28])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[27].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_27_IBUF_211),
    .I1(inter_carry[26]),
    .I2(A_27_IBUF_83),
    .O(inter_carry[27])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[26].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_26_IBUF_210),
    .I1(inter_carry[25]),
    .I2(A_26_IBUF_82),
    .O(inter_carry[26])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[25].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_25_IBUF_209),
    .I1(inter_carry[24]),
    .I2(A_25_IBUF_81),
    .O(inter_carry[25])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[24].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_24_IBUF_208),
    .I1(inter_carry[23]),
    .I2(A_24_IBUF_80),
    .O(inter_carry[24])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[23].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_23_IBUF_207),
    .I1(inter_carry[22]),
    .I2(A_23_IBUF_79),
    .O(inter_carry[23])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[22].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_22_IBUF_206),
    .I1(inter_carry[21]),
    .I2(A_22_IBUF_78),
    .O(inter_carry[22])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[21].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_21_IBUF_205),
    .I1(inter_carry[20]),
    .I2(A_21_IBUF_77),
    .O(inter_carry[21])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[20].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_20_IBUF_204),
    .I1(inter_carry[19]),
    .I2(A_20_IBUF_76),
    .O(inter_carry[20])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[19].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_19_IBUF_202),
    .I1(inter_carry[18]),
    .I2(A_19_IBUF_74),
    .O(inter_carry[19])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[18].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_18_IBUF_201),
    .I1(inter_carry[17]),
    .I2(A_18_IBUF_73),
    .O(inter_carry[18])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[17].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_17_IBUF_200),
    .I1(inter_carry[16]),
    .I2(A_17_IBUF_72),
    .O(inter_carry[17])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[16].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_16_IBUF_199),
    .I1(inter_carry[15]),
    .I2(A_16_IBUF_71),
    .O(inter_carry[16])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[15].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_15_IBUF_198),
    .I1(inter_carry[14]),
    .I2(A_15_IBUF_70),
    .O(inter_carry[15])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[14].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_14_IBUF_197),
    .I1(inter_carry[13]),
    .I2(A_14_IBUF_69),
    .O(inter_carry[14])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[13].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_13_IBUF_196),
    .I1(inter_carry[12]),
    .I2(A_13_IBUF_68),
    .O(inter_carry[13])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[12].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_12_IBUF_195),
    .I1(inter_carry[11]),
    .I2(A_12_IBUF_67),
    .O(inter_carry[12])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[11].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_11_IBUF_194),
    .I1(inter_carry[10]),
    .I2(A_11_IBUF_66),
    .O(inter_carry[11])
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \genFA[10].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(B_10_IBUF_193),
    .I1(inter_carry[9]),
    .I2(A_10_IBUF_65),
    .O(inter_carry[10])
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[9].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_9_IBUF_127),
    .I1(B_9_IBUF_255),
    .I2(inter_carry[8]),
    .O(Sum_9_OBUF_384)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[8].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_8_IBUF_126),
    .I1(B_8_IBUF_254),
    .I2(inter_carry[7]),
    .O(Sum_8_OBUF_383)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[7].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_7_IBUF_125),
    .I1(B_7_IBUF_253),
    .I2(inter_carry[6]),
    .O(Sum_7_OBUF_382)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[6].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_6_IBUF_124),
    .I1(B_6_IBUF_252),
    .I2(inter_carry[5]),
    .O(Sum_6_OBUF_381)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[63].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_63_IBUF_123),
    .I1(B_63_IBUF_251),
    .I2(inter_carry[62]),
    .O(Sum_63_OBUF_380)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[62].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_62_IBUF_122),
    .I1(B_62_IBUF_250),
    .I2(inter_carry[61]),
    .O(Sum_62_OBUF_379)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[61].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_61_IBUF_121),
    .I1(B_61_IBUF_249),
    .I2(inter_carry[60]),
    .O(Sum_61_OBUF_378)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[60].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_60_IBUF_120),
    .I1(B_60_IBUF_248),
    .I2(inter_carry[59]),
    .O(Sum_60_OBUF_377)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[5].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_5_IBUF_119),
    .I1(B_5_IBUF_247),
    .I2(inter_carry[4]),
    .O(Sum_5_OBUF_376)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[59].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_59_IBUF_118),
    .I1(B_59_IBUF_246),
    .I2(inter_carry[58]),
    .O(Sum_59_OBUF_375)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[58].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_58_IBUF_117),
    .I1(B_58_IBUF_245),
    .I2(inter_carry[57]),
    .O(Sum_58_OBUF_374)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[57].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_57_IBUF_116),
    .I1(B_57_IBUF_244),
    .I2(inter_carry[56]),
    .O(Sum_57_OBUF_373)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[56].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_56_IBUF_115),
    .I1(B_56_IBUF_243),
    .I2(inter_carry[55]),
    .O(Sum_56_OBUF_372)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[55].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_55_IBUF_114),
    .I1(B_55_IBUF_242),
    .I2(inter_carry[54]),
    .O(Sum_55_OBUF_371)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[54].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_54_IBUF_113),
    .I1(B_54_IBUF_241),
    .I2(inter_carry[53]),
    .O(Sum_54_OBUF_370)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[53].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_53_IBUF_112),
    .I1(B_53_IBUF_240),
    .I2(inter_carry[52]),
    .O(Sum_53_OBUF_369)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[52].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_52_IBUF_111),
    .I1(B_52_IBUF_239),
    .I2(inter_carry[51]),
    .O(Sum_52_OBUF_368)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[51].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_51_IBUF_110),
    .I1(B_51_IBUF_238),
    .I2(inter_carry[50]),
    .O(Sum_51_OBUF_367)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[50].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_50_IBUF_109),
    .I1(B_50_IBUF_237),
    .I2(inter_carry[49]),
    .O(Sum_50_OBUF_366)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[4].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_4_IBUF_108),
    .I1(B_4_IBUF_236),
    .I2(inter_carry[3]),
    .O(Sum_4_OBUF_365)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[49].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_49_IBUF_107),
    .I1(B_49_IBUF_235),
    .I2(inter_carry[48]),
    .O(Sum_49_OBUF_364)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[48].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_48_IBUF_106),
    .I1(B_48_IBUF_234),
    .I2(inter_carry[47]),
    .O(Sum_48_OBUF_363)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[47].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_47_IBUF_105),
    .I1(B_47_IBUF_233),
    .I2(inter_carry[46]),
    .O(Sum_47_OBUF_362)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[46].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_46_IBUF_104),
    .I1(B_46_IBUF_232),
    .I2(inter_carry[45]),
    .O(Sum_46_OBUF_361)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[45].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_45_IBUF_103),
    .I1(B_45_IBUF_231),
    .I2(inter_carry[44]),
    .O(Sum_45_OBUF_360)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[44].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_44_IBUF_102),
    .I1(B_44_IBUF_230),
    .I2(inter_carry[43]),
    .O(Sum_44_OBUF_359)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[43].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_43_IBUF_101),
    .I1(B_43_IBUF_229),
    .I2(inter_carry[42]),
    .O(Sum_43_OBUF_358)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[42].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_42_IBUF_100),
    .I1(B_42_IBUF_228),
    .I2(inter_carry[41]),
    .O(Sum_42_OBUF_357)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[41].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_41_IBUF_99),
    .I1(B_41_IBUF_227),
    .I2(inter_carry[40]),
    .O(Sum_41_OBUF_356)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[40].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_40_IBUF_98),
    .I1(B_40_IBUF_226),
    .I2(inter_carry[39]),
    .O(Sum_40_OBUF_355)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[3].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_3_IBUF_97),
    .I1(B_3_IBUF_225),
    .I2(inter_carry[2]),
    .O(Sum_3_OBUF_354)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[39].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_39_IBUF_96),
    .I1(B_39_IBUF_224),
    .I2(inter_carry[38]),
    .O(Sum_39_OBUF_353)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[38].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_38_IBUF_95),
    .I1(B_38_IBUF_223),
    .I2(inter_carry[37]),
    .O(Sum_38_OBUF_352)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[37].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_37_IBUF_94),
    .I1(B_37_IBUF_222),
    .I2(inter_carry[36]),
    .O(Sum_37_OBUF_351)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[36].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_36_IBUF_93),
    .I1(B_36_IBUF_221),
    .I2(inter_carry[35]),
    .O(Sum_36_OBUF_350)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[35].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_35_IBUF_92),
    .I1(B_35_IBUF_220),
    .I2(inter_carry[34]),
    .O(Sum_35_OBUF_349)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[34].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_34_IBUF_91),
    .I1(B_34_IBUF_219),
    .I2(inter_carry[33]),
    .O(Sum_34_OBUF_348)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[33].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_33_IBUF_90),
    .I1(B_33_IBUF_218),
    .I2(inter_carry[32]),
    .O(Sum_33_OBUF_347)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[32].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_32_IBUF_89),
    .I1(B_32_IBUF_217),
    .I2(inter_carry[31]),
    .O(Sum_32_OBUF_346)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[31].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_31_IBUF_88),
    .I1(B_31_IBUF_216),
    .I2(inter_carry[30]),
    .O(Sum_31_OBUF_345)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[30].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_30_IBUF_87),
    .I1(B_30_IBUF_215),
    .I2(inter_carry[29]),
    .O(Sum_30_OBUF_344)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[2].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_2_IBUF_86),
    .I1(B_2_IBUF_214),
    .I2(inter_carry[1]),
    .O(Sum_2_OBUF_343)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[29].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_29_IBUF_85),
    .I1(B_29_IBUF_213),
    .I2(inter_carry[28]),
    .O(Sum_29_OBUF_342)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[28].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_28_IBUF_84),
    .I1(B_28_IBUF_212),
    .I2(inter_carry[27]),
    .O(Sum_28_OBUF_341)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[27].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_27_IBUF_83),
    .I1(B_27_IBUF_211),
    .I2(inter_carry[26]),
    .O(Sum_27_OBUF_340)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[26].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_26_IBUF_82),
    .I1(B_26_IBUF_210),
    .I2(inter_carry[25]),
    .O(Sum_26_OBUF_339)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[25].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_25_IBUF_81),
    .I1(B_25_IBUF_209),
    .I2(inter_carry[24]),
    .O(Sum_25_OBUF_338)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[24].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_24_IBUF_80),
    .I1(B_24_IBUF_208),
    .I2(inter_carry[23]),
    .O(Sum_24_OBUF_337)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[23].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_23_IBUF_79),
    .I1(B_23_IBUF_207),
    .I2(inter_carry[22]),
    .O(Sum_23_OBUF_336)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[22].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_22_IBUF_78),
    .I1(B_22_IBUF_206),
    .I2(inter_carry[21]),
    .O(Sum_22_OBUF_335)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[21].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_21_IBUF_77),
    .I1(B_21_IBUF_205),
    .I2(inter_carry[20]),
    .O(Sum_21_OBUF_334)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[20].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_20_IBUF_76),
    .I1(B_20_IBUF_204),
    .I2(inter_carry[19]),
    .O(Sum_20_OBUF_333)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[19].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_19_IBUF_74),
    .I1(B_19_IBUF_202),
    .I2(inter_carry[18]),
    .O(Sum_19_OBUF_331)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[18].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_18_IBUF_73),
    .I1(B_18_IBUF_201),
    .I2(inter_carry[17]),
    .O(Sum_18_OBUF_330)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[17].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_17_IBUF_72),
    .I1(B_17_IBUF_200),
    .I2(inter_carry[16]),
    .O(Sum_17_OBUF_329)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[16].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_16_IBUF_71),
    .I1(B_16_IBUF_199),
    .I2(inter_carry[15]),
    .O(Sum_16_OBUF_328)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[15].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_15_IBUF_70),
    .I1(B_15_IBUF_198),
    .I2(inter_carry[14]),
    .O(Sum_15_OBUF_327)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[14].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_14_IBUF_69),
    .I1(B_14_IBUF_197),
    .I2(inter_carry[13]),
    .O(Sum_14_OBUF_326)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[13].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_13_IBUF_68),
    .I1(B_13_IBUF_196),
    .I2(inter_carry[12]),
    .O(Sum_13_OBUF_325)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[12].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_12_IBUF_67),
    .I1(B_12_IBUF_195),
    .I2(inter_carry[11]),
    .O(Sum_12_OBUF_324)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[11].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_11_IBUF_66),
    .I1(B_11_IBUF_194),
    .I2(inter_carry[10]),
    .O(Sum_11_OBUF_323)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \genFA[10].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_10_IBUF_65),
    .I1(B_10_IBUF_193),
    .I2(inter_carry[9]),
    .O(Sum_10_OBUF_322)
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \genFA[1].non_first_1_bit_adder.instance_name/Carry1  (
    .I0(A_1_IBUF_75),
    .I1(A_0_IBUF_64),
    .I2(B_0_IBUF_192),
    .I3(B_1_IBUF_203),
    .O(inter_carry[1])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \genFA[1].non_first_1_bit_adder.instance_name/Mxor_Sum_Result1  (
    .I0(A_0_IBUF_64),
    .I1(B_0_IBUF_192),
    .I2(A_1_IBUF_75),
    .I3(B_1_IBUF_203),
    .O(Sum_1_OBUF_332)
  );
  IBUF   A_63_IBUF (
    .I(A[63]),
    .O(A_63_IBUF_123)
  );
  IBUF   A_62_IBUF (
    .I(A[62]),
    .O(A_62_IBUF_122)
  );
  IBUF   A_61_IBUF (
    .I(A[61]),
    .O(A_61_IBUF_121)
  );
  IBUF   A_60_IBUF (
    .I(A[60]),
    .O(A_60_IBUF_120)
  );
  IBUF   A_59_IBUF (
    .I(A[59]),
    .O(A_59_IBUF_118)
  );
  IBUF   A_58_IBUF (
    .I(A[58]),
    .O(A_58_IBUF_117)
  );
  IBUF   A_57_IBUF (
    .I(A[57]),
    .O(A_57_IBUF_116)
  );
  IBUF   A_56_IBUF (
    .I(A[56]),
    .O(A_56_IBUF_115)
  );
  IBUF   A_55_IBUF (
    .I(A[55]),
    .O(A_55_IBUF_114)
  );
  IBUF   A_54_IBUF (
    .I(A[54]),
    .O(A_54_IBUF_113)
  );
  IBUF   A_53_IBUF (
    .I(A[53]),
    .O(A_53_IBUF_112)
  );
  IBUF   A_52_IBUF (
    .I(A[52]),
    .O(A_52_IBUF_111)
  );
  IBUF   A_51_IBUF (
    .I(A[51]),
    .O(A_51_IBUF_110)
  );
  IBUF   A_50_IBUF (
    .I(A[50]),
    .O(A_50_IBUF_109)
  );
  IBUF   A_49_IBUF (
    .I(A[49]),
    .O(A_49_IBUF_107)
  );
  IBUF   A_48_IBUF (
    .I(A[48]),
    .O(A_48_IBUF_106)
  );
  IBUF   A_47_IBUF (
    .I(A[47]),
    .O(A_47_IBUF_105)
  );
  IBUF   A_46_IBUF (
    .I(A[46]),
    .O(A_46_IBUF_104)
  );
  IBUF   A_45_IBUF (
    .I(A[45]),
    .O(A_45_IBUF_103)
  );
  IBUF   A_44_IBUF (
    .I(A[44]),
    .O(A_44_IBUF_102)
  );
  IBUF   A_43_IBUF (
    .I(A[43]),
    .O(A_43_IBUF_101)
  );
  IBUF   A_42_IBUF (
    .I(A[42]),
    .O(A_42_IBUF_100)
  );
  IBUF   A_41_IBUF (
    .I(A[41]),
    .O(A_41_IBUF_99)
  );
  IBUF   A_40_IBUF (
    .I(A[40]),
    .O(A_40_IBUF_98)
  );
  IBUF   A_39_IBUF (
    .I(A[39]),
    .O(A_39_IBUF_96)
  );
  IBUF   A_38_IBUF (
    .I(A[38]),
    .O(A_38_IBUF_95)
  );
  IBUF   A_37_IBUF (
    .I(A[37]),
    .O(A_37_IBUF_94)
  );
  IBUF   A_36_IBUF (
    .I(A[36]),
    .O(A_36_IBUF_93)
  );
  IBUF   A_35_IBUF (
    .I(A[35]),
    .O(A_35_IBUF_92)
  );
  IBUF   A_34_IBUF (
    .I(A[34]),
    .O(A_34_IBUF_91)
  );
  IBUF   A_33_IBUF (
    .I(A[33]),
    .O(A_33_IBUF_90)
  );
  IBUF   A_32_IBUF (
    .I(A[32]),
    .O(A_32_IBUF_89)
  );
  IBUF   A_31_IBUF (
    .I(A[31]),
    .O(A_31_IBUF_88)
  );
  IBUF   A_30_IBUF (
    .I(A[30]),
    .O(A_30_IBUF_87)
  );
  IBUF   A_29_IBUF (
    .I(A[29]),
    .O(A_29_IBUF_85)
  );
  IBUF   A_28_IBUF (
    .I(A[28]),
    .O(A_28_IBUF_84)
  );
  IBUF   A_27_IBUF (
    .I(A[27]),
    .O(A_27_IBUF_83)
  );
  IBUF   A_26_IBUF (
    .I(A[26]),
    .O(A_26_IBUF_82)
  );
  IBUF   A_25_IBUF (
    .I(A[25]),
    .O(A_25_IBUF_81)
  );
  IBUF   A_24_IBUF (
    .I(A[24]),
    .O(A_24_IBUF_80)
  );
  IBUF   A_23_IBUF (
    .I(A[23]),
    .O(A_23_IBUF_79)
  );
  IBUF   A_22_IBUF (
    .I(A[22]),
    .O(A_22_IBUF_78)
  );
  IBUF   A_21_IBUF (
    .I(A[21]),
    .O(A_21_IBUF_77)
  );
  IBUF   A_20_IBUF (
    .I(A[20]),
    .O(A_20_IBUF_76)
  );
  IBUF   A_19_IBUF (
    .I(A[19]),
    .O(A_19_IBUF_74)
  );
  IBUF   A_18_IBUF (
    .I(A[18]),
    .O(A_18_IBUF_73)
  );
  IBUF   A_17_IBUF (
    .I(A[17]),
    .O(A_17_IBUF_72)
  );
  IBUF   A_16_IBUF (
    .I(A[16]),
    .O(A_16_IBUF_71)
  );
  IBUF   A_15_IBUF (
    .I(A[15]),
    .O(A_15_IBUF_70)
  );
  IBUF   A_14_IBUF (
    .I(A[14]),
    .O(A_14_IBUF_69)
  );
  IBUF   A_13_IBUF (
    .I(A[13]),
    .O(A_13_IBUF_68)
  );
  IBUF   A_12_IBUF (
    .I(A[12]),
    .O(A_12_IBUF_67)
  );
  IBUF   A_11_IBUF (
    .I(A[11]),
    .O(A_11_IBUF_66)
  );
  IBUF   A_10_IBUF (
    .I(A[10]),
    .O(A_10_IBUF_65)
  );
  IBUF   A_9_IBUF (
    .I(A[9]),
    .O(A_9_IBUF_127)
  );
  IBUF   A_8_IBUF (
    .I(A[8]),
    .O(A_8_IBUF_126)
  );
  IBUF   A_7_IBUF (
    .I(A[7]),
    .O(A_7_IBUF_125)
  );
  IBUF   A_6_IBUF (
    .I(A[6]),
    .O(A_6_IBUF_124)
  );
  IBUF   A_5_IBUF (
    .I(A[5]),
    .O(A_5_IBUF_119)
  );
  IBUF   A_4_IBUF (
    .I(A[4]),
    .O(A_4_IBUF_108)
  );
  IBUF   A_3_IBUF (
    .I(A[3]),
    .O(A_3_IBUF_97)
  );
  IBUF   A_2_IBUF (
    .I(A[2]),
    .O(A_2_IBUF_86)
  );
  IBUF   A_1_IBUF (
    .I(A[1]),
    .O(A_1_IBUF_75)
  );
  IBUF   A_0_IBUF (
    .I(A[0]),
    .O(A_0_IBUF_64)
  );
  IBUF   B_63_IBUF (
    .I(B[63]),
    .O(B_63_IBUF_251)
  );
  IBUF   B_62_IBUF (
    .I(B[62]),
    .O(B_62_IBUF_250)
  );
  IBUF   B_61_IBUF (
    .I(B[61]),
    .O(B_61_IBUF_249)
  );
  IBUF   B_60_IBUF (
    .I(B[60]),
    .O(B_60_IBUF_248)
  );
  IBUF   B_59_IBUF (
    .I(B[59]),
    .O(B_59_IBUF_246)
  );
  IBUF   B_58_IBUF (
    .I(B[58]),
    .O(B_58_IBUF_245)
  );
  IBUF   B_57_IBUF (
    .I(B[57]),
    .O(B_57_IBUF_244)
  );
  IBUF   B_56_IBUF (
    .I(B[56]),
    .O(B_56_IBUF_243)
  );
  IBUF   B_55_IBUF (
    .I(B[55]),
    .O(B_55_IBUF_242)
  );
  IBUF   B_54_IBUF (
    .I(B[54]),
    .O(B_54_IBUF_241)
  );
  IBUF   B_53_IBUF (
    .I(B[53]),
    .O(B_53_IBUF_240)
  );
  IBUF   B_52_IBUF (
    .I(B[52]),
    .O(B_52_IBUF_239)
  );
  IBUF   B_51_IBUF (
    .I(B[51]),
    .O(B_51_IBUF_238)
  );
  IBUF   B_50_IBUF (
    .I(B[50]),
    .O(B_50_IBUF_237)
  );
  IBUF   B_49_IBUF (
    .I(B[49]),
    .O(B_49_IBUF_235)
  );
  IBUF   B_48_IBUF (
    .I(B[48]),
    .O(B_48_IBUF_234)
  );
  IBUF   B_47_IBUF (
    .I(B[47]),
    .O(B_47_IBUF_233)
  );
  IBUF   B_46_IBUF (
    .I(B[46]),
    .O(B_46_IBUF_232)
  );
  IBUF   B_45_IBUF (
    .I(B[45]),
    .O(B_45_IBUF_231)
  );
  IBUF   B_44_IBUF (
    .I(B[44]),
    .O(B_44_IBUF_230)
  );
  IBUF   B_43_IBUF (
    .I(B[43]),
    .O(B_43_IBUF_229)
  );
  IBUF   B_42_IBUF (
    .I(B[42]),
    .O(B_42_IBUF_228)
  );
  IBUF   B_41_IBUF (
    .I(B[41]),
    .O(B_41_IBUF_227)
  );
  IBUF   B_40_IBUF (
    .I(B[40]),
    .O(B_40_IBUF_226)
  );
  IBUF   B_39_IBUF (
    .I(B[39]),
    .O(B_39_IBUF_224)
  );
  IBUF   B_38_IBUF (
    .I(B[38]),
    .O(B_38_IBUF_223)
  );
  IBUF   B_37_IBUF (
    .I(B[37]),
    .O(B_37_IBUF_222)
  );
  IBUF   B_36_IBUF (
    .I(B[36]),
    .O(B_36_IBUF_221)
  );
  IBUF   B_35_IBUF (
    .I(B[35]),
    .O(B_35_IBUF_220)
  );
  IBUF   B_34_IBUF (
    .I(B[34]),
    .O(B_34_IBUF_219)
  );
  IBUF   B_33_IBUF (
    .I(B[33]),
    .O(B_33_IBUF_218)
  );
  IBUF   B_32_IBUF (
    .I(B[32]),
    .O(B_32_IBUF_217)
  );
  IBUF   B_31_IBUF (
    .I(B[31]),
    .O(B_31_IBUF_216)
  );
  IBUF   B_30_IBUF (
    .I(B[30]),
    .O(B_30_IBUF_215)
  );
  IBUF   B_29_IBUF (
    .I(B[29]),
    .O(B_29_IBUF_213)
  );
  IBUF   B_28_IBUF (
    .I(B[28]),
    .O(B_28_IBUF_212)
  );
  IBUF   B_27_IBUF (
    .I(B[27]),
    .O(B_27_IBUF_211)
  );
  IBUF   B_26_IBUF (
    .I(B[26]),
    .O(B_26_IBUF_210)
  );
  IBUF   B_25_IBUF (
    .I(B[25]),
    .O(B_25_IBUF_209)
  );
  IBUF   B_24_IBUF (
    .I(B[24]),
    .O(B_24_IBUF_208)
  );
  IBUF   B_23_IBUF (
    .I(B[23]),
    .O(B_23_IBUF_207)
  );
  IBUF   B_22_IBUF (
    .I(B[22]),
    .O(B_22_IBUF_206)
  );
  IBUF   B_21_IBUF (
    .I(B[21]),
    .O(B_21_IBUF_205)
  );
  IBUF   B_20_IBUF (
    .I(B[20]),
    .O(B_20_IBUF_204)
  );
  IBUF   B_19_IBUF (
    .I(B[19]),
    .O(B_19_IBUF_202)
  );
  IBUF   B_18_IBUF (
    .I(B[18]),
    .O(B_18_IBUF_201)
  );
  IBUF   B_17_IBUF (
    .I(B[17]),
    .O(B_17_IBUF_200)
  );
  IBUF   B_16_IBUF (
    .I(B[16]),
    .O(B_16_IBUF_199)
  );
  IBUF   B_15_IBUF (
    .I(B[15]),
    .O(B_15_IBUF_198)
  );
  IBUF   B_14_IBUF (
    .I(B[14]),
    .O(B_14_IBUF_197)
  );
  IBUF   B_13_IBUF (
    .I(B[13]),
    .O(B_13_IBUF_196)
  );
  IBUF   B_12_IBUF (
    .I(B[12]),
    .O(B_12_IBUF_195)
  );
  IBUF   B_11_IBUF (
    .I(B[11]),
    .O(B_11_IBUF_194)
  );
  IBUF   B_10_IBUF (
    .I(B[10]),
    .O(B_10_IBUF_193)
  );
  IBUF   B_9_IBUF (
    .I(B[9]),
    .O(B_9_IBUF_255)
  );
  IBUF   B_8_IBUF (
    .I(B[8]),
    .O(B_8_IBUF_254)
  );
  IBUF   B_7_IBUF (
    .I(B[7]),
    .O(B_7_IBUF_253)
  );
  IBUF   B_6_IBUF (
    .I(B[6]),
    .O(B_6_IBUF_252)
  );
  IBUF   B_5_IBUF (
    .I(B[5]),
    .O(B_5_IBUF_247)
  );
  IBUF   B_4_IBUF (
    .I(B[4]),
    .O(B_4_IBUF_236)
  );
  IBUF   B_3_IBUF (
    .I(B[3]),
    .O(B_3_IBUF_225)
  );
  IBUF   B_2_IBUF (
    .I(B[2]),
    .O(B_2_IBUF_214)
  );
  IBUF   B_1_IBUF (
    .I(B[1]),
    .O(B_1_IBUF_203)
  );
  IBUF   B_0_IBUF (
    .I(B[0]),
    .O(B_0_IBUF_192)
  );
  OBUF   Carry_OBUF (
    .I(inter_carry[63]),
    .O(Carry)
  );
  OBUF   Sum_63_OBUF (
    .I(Sum_63_OBUF_380),
    .O(Sum[63])
  );
  OBUF   Sum_62_OBUF (
    .I(Sum_62_OBUF_379),
    .O(Sum[62])
  );
  OBUF   Sum_61_OBUF (
    .I(Sum_61_OBUF_378),
    .O(Sum[61])
  );
  OBUF   Sum_60_OBUF (
    .I(Sum_60_OBUF_377),
    .O(Sum[60])
  );
  OBUF   Sum_59_OBUF (
    .I(Sum_59_OBUF_375),
    .O(Sum[59])
  );
  OBUF   Sum_58_OBUF (
    .I(Sum_58_OBUF_374),
    .O(Sum[58])
  );
  OBUF   Sum_57_OBUF (
    .I(Sum_57_OBUF_373),
    .O(Sum[57])
  );
  OBUF   Sum_56_OBUF (
    .I(Sum_56_OBUF_372),
    .O(Sum[56])
  );
  OBUF   Sum_55_OBUF (
    .I(Sum_55_OBUF_371),
    .O(Sum[55])
  );
  OBUF   Sum_54_OBUF (
    .I(Sum_54_OBUF_370),
    .O(Sum[54])
  );
  OBUF   Sum_53_OBUF (
    .I(Sum_53_OBUF_369),
    .O(Sum[53])
  );
  OBUF   Sum_52_OBUF (
    .I(Sum_52_OBUF_368),
    .O(Sum[52])
  );
  OBUF   Sum_51_OBUF (
    .I(Sum_51_OBUF_367),
    .O(Sum[51])
  );
  OBUF   Sum_50_OBUF (
    .I(Sum_50_OBUF_366),
    .O(Sum[50])
  );
  OBUF   Sum_49_OBUF (
    .I(Sum_49_OBUF_364),
    .O(Sum[49])
  );
  OBUF   Sum_48_OBUF (
    .I(Sum_48_OBUF_363),
    .O(Sum[48])
  );
  OBUF   Sum_47_OBUF (
    .I(Sum_47_OBUF_362),
    .O(Sum[47])
  );
  OBUF   Sum_46_OBUF (
    .I(Sum_46_OBUF_361),
    .O(Sum[46])
  );
  OBUF   Sum_45_OBUF (
    .I(Sum_45_OBUF_360),
    .O(Sum[45])
  );
  OBUF   Sum_44_OBUF (
    .I(Sum_44_OBUF_359),
    .O(Sum[44])
  );
  OBUF   Sum_43_OBUF (
    .I(Sum_43_OBUF_358),
    .O(Sum[43])
  );
  OBUF   Sum_42_OBUF (
    .I(Sum_42_OBUF_357),
    .O(Sum[42])
  );
  OBUF   Sum_41_OBUF (
    .I(Sum_41_OBUF_356),
    .O(Sum[41])
  );
  OBUF   Sum_40_OBUF (
    .I(Sum_40_OBUF_355),
    .O(Sum[40])
  );
  OBUF   Sum_39_OBUF (
    .I(Sum_39_OBUF_353),
    .O(Sum[39])
  );
  OBUF   Sum_38_OBUF (
    .I(Sum_38_OBUF_352),
    .O(Sum[38])
  );
  OBUF   Sum_37_OBUF (
    .I(Sum_37_OBUF_351),
    .O(Sum[37])
  );
  OBUF   Sum_36_OBUF (
    .I(Sum_36_OBUF_350),
    .O(Sum[36])
  );
  OBUF   Sum_35_OBUF (
    .I(Sum_35_OBUF_349),
    .O(Sum[35])
  );
  OBUF   Sum_34_OBUF (
    .I(Sum_34_OBUF_348),
    .O(Sum[34])
  );
  OBUF   Sum_33_OBUF (
    .I(Sum_33_OBUF_347),
    .O(Sum[33])
  );
  OBUF   Sum_32_OBUF (
    .I(Sum_32_OBUF_346),
    .O(Sum[32])
  );
  OBUF   Sum_31_OBUF (
    .I(Sum_31_OBUF_345),
    .O(Sum[31])
  );
  OBUF   Sum_30_OBUF (
    .I(Sum_30_OBUF_344),
    .O(Sum[30])
  );
  OBUF   Sum_29_OBUF (
    .I(Sum_29_OBUF_342),
    .O(Sum[29])
  );
  OBUF   Sum_28_OBUF (
    .I(Sum_28_OBUF_341),
    .O(Sum[28])
  );
  OBUF   Sum_27_OBUF (
    .I(Sum_27_OBUF_340),
    .O(Sum[27])
  );
  OBUF   Sum_26_OBUF (
    .I(Sum_26_OBUF_339),
    .O(Sum[26])
  );
  OBUF   Sum_25_OBUF (
    .I(Sum_25_OBUF_338),
    .O(Sum[25])
  );
  OBUF   Sum_24_OBUF (
    .I(Sum_24_OBUF_337),
    .O(Sum[24])
  );
  OBUF   Sum_23_OBUF (
    .I(Sum_23_OBUF_336),
    .O(Sum[23])
  );
  OBUF   Sum_22_OBUF (
    .I(Sum_22_OBUF_335),
    .O(Sum[22])
  );
  OBUF   Sum_21_OBUF (
    .I(Sum_21_OBUF_334),
    .O(Sum[21])
  );
  OBUF   Sum_20_OBUF (
    .I(Sum_20_OBUF_333),
    .O(Sum[20])
  );
  OBUF   Sum_19_OBUF (
    .I(Sum_19_OBUF_331),
    .O(Sum[19])
  );
  OBUF   Sum_18_OBUF (
    .I(Sum_18_OBUF_330),
    .O(Sum[18])
  );
  OBUF   Sum_17_OBUF (
    .I(Sum_17_OBUF_329),
    .O(Sum[17])
  );
  OBUF   Sum_16_OBUF (
    .I(Sum_16_OBUF_328),
    .O(Sum[16])
  );
  OBUF   Sum_15_OBUF (
    .I(Sum_15_OBUF_327),
    .O(Sum[15])
  );
  OBUF   Sum_14_OBUF (
    .I(Sum_14_OBUF_326),
    .O(Sum[14])
  );
  OBUF   Sum_13_OBUF (
    .I(Sum_13_OBUF_325),
    .O(Sum[13])
  );
  OBUF   Sum_12_OBUF (
    .I(Sum_12_OBUF_324),
    .O(Sum[12])
  );
  OBUF   Sum_11_OBUF (
    .I(Sum_11_OBUF_323),
    .O(Sum[11])
  );
  OBUF   Sum_10_OBUF (
    .I(Sum_10_OBUF_322),
    .O(Sum[10])
  );
  OBUF   Sum_9_OBUF (
    .I(Sum_9_OBUF_384),
    .O(Sum[9])
  );
  OBUF   Sum_8_OBUF (
    .I(Sum_8_OBUF_383),
    .O(Sum[8])
  );
  OBUF   Sum_7_OBUF (
    .I(Sum_7_OBUF_382),
    .O(Sum[7])
  );
  OBUF   Sum_6_OBUF (
    .I(Sum_6_OBUF_381),
    .O(Sum[6])
  );
  OBUF   Sum_5_OBUF (
    .I(Sum_5_OBUF_376),
    .O(Sum[5])
  );
  OBUF   Sum_4_OBUF (
    .I(Sum_4_OBUF_365),
    .O(Sum[4])
  );
  OBUF   Sum_3_OBUF (
    .I(Sum_3_OBUF_354),
    .O(Sum[3])
  );
  OBUF   Sum_2_OBUF (
    .I(Sum_2_OBUF_343),
    .O(Sum[2])
  );
  OBUF   Sum_1_OBUF (
    .I(Sum_1_OBUF_332),
    .O(Sum[1])
  );
  OBUF   Sum_0_OBUF (
    .I(Sum_0_OBUF_321),
    .O(Sum[0])
  );
endmodule


`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

    wire GSR;
    wire GTS;
    wire PRLD;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

