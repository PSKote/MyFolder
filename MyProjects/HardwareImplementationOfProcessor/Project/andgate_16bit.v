 module and_16 (y, a, b);
	output [15:0] y;
	input [15:0] a; input [15:0] b;
	
and_gate a1 (y[0], a[0], b[0]);
and_gate a2 (y[1], a[1], b[1]);
and_gate a3 (y[2], a[2], b[2]);
and_gate a4 (y[3], a[3], b[3]);
and_gate a5 (y[4], a[4], b[4]);
and_gate a6 (y[5], a[5], b[5]);
and_gate a7 (y[6], a[6], b[6]);
and_gate a8 (y[7], a[7], b[7]);
and_gate a9 (y[8], a[8], b[8]);
and_gate a10 (y[9], a[9], b[9]);
and_gate a11 (y[10], a[10], b[10]);
and_gate a12 (y[11], a[11], b[11]);
and_gate a13 (y[12], a[12], b[12]);
and_gate a14 (y[13], a[13], b[13]);
and_gate a15 (y[14], a[14], b[14]);
and_gate a16 (y[15], a[15], b[15]);

endmodule 
