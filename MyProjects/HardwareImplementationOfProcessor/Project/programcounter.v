module pc (out, in, inc, load, reset, clk);
	input [15:0] in;
	input load, reset, inc, clk;
	output [15:0] out;
	
wire w4,w6,w7,cz;
wire [15:0] w1,w2,w3,w5;
wire [15:0] out;


mux16_21 m1(w2, load, w1, in);
mux16_21 m2(w3,w4,w2,w5);
mux16_21 m3(out, reset, w3, 16'b0000000000000000);
NOT_gate n1(w6,load);
and_gate a1(w4,inc,w6);
fa_16 f1 (w5,cz,w2,16'b0000000000000001,1'b0);
register_16 r1(w1,out,1'b1,clk);

endmodule 