module register_16 (out, in, load, clk);
	output [15:0] out;
	input [15:0] in; input load, clk;
	wire [15:0] out;

reg_1bit r1 (out[0], in[0], load, clk);
reg_1bit r2 (out[1], in[1], load, clk);
reg_1bit r3 (out[2], in[2], load, clk);
reg_1bit r4 (out[3], in[3], load, clk);
reg_1bit r5 (out[4], in[4], load, clk);
reg_1bit r6 (out[5], in[5], load, clk);
reg_1bit r7 (out[6], in[6], load, clk);
reg_1bit r8 (out[7], in[7], load, clk);
reg_1bit r9 (out[8], in[8], load, clk);
reg_1bit r10 (out[9], in[9], load, clk);
reg_1bit r11 (out[10], in[10], load, clk);
reg_1bit r12 (out[11], in[11], load, clk);
reg_1bit r13 (out[12], in[12], load, clk);
reg_1bit r14 (out[13], in[13], load, clk);
reg_1bit r15 (out[14], in[14], load, clk);
reg_1bit r16 (out[15], in[15], load, clk);

endmodule
