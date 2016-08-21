module cpu ( out, address, pc, write, istr, reset, clk, in);
	output [15:0] out; output [15:0] pc ; 
	output write; 
	inout [15:0] istr;
	input [15:0] in;
	input reset, clk;
	output [15:0] address;
	
	wire [15:0] out;
	wire [15:0] w19;

wire [15:0] w1, w3, w4, address;
wire w5, w6, w7, w8, w9, w10, w11, w12, w13, w14, w15, w16, w17, w18;

assign w19[15]=1'b0;
assign w19[14:0]=istr[14:0];
	
mux16_21 p1 (w1 ,istr[15], w19, out);
NOT_gate n1 (w15, istr[15]);
or_gate o1 (w16, istr[5], w15);
register_16 p2 (address, w1, w16, clk);
mux16_21 p3 (w3 ,istr[12], address,in);
and_gate a1 (w5, istr[4], istr[15]);
register_16 p4 (w4, out, w5, clk);
newalu p5 (out, w18, w17, istr[11:6], w4, w3);
and_gate a2 (write, istr[15], istr[3]);
or_gate o2 (w6, w17, w18);
NOT_gate n2 (w7, w6);
and_gate a3 (w10, w7, istr[0]);
and_gate a4 (w9, w17, istr[2]);
and_gate a5 (w8, w18, istr[1]);
or_gate o3 (w11, w9, w8);
or_gate o4 (w12, w10, w11);
and_gate a6 (w13, w12, istr[15]);
NOT_gate n3 (w14, w13);
pc p7 (pc, address, w14, w13, reset, clk);

endmodule
