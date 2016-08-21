module notgate_16 (y, a);
	output [15:0] y;
	input [15:0] a;

NOT_gate n1 (y[0], a[0]);
NOT_gate n2 (y[1], a[1]);
NOT_gate n3 (y[2], a[2]);
NOT_gate n4 (y[3], a[3]);
NOT_gate n5 (y[4], a[4]);
NOT_gate n6 (y[5], a[5]);
NOT_gate n7 (y[6], a[6]);
NOT_gate n8 (y[7], a[7]);
NOT_gate n9 (y[8], a[8]);
NOT_gate n10 (y[9], a[9]);
NOT_gate n11 (y[10], a[10]);
NOT_gate n12 (y[11], a[11]);
NOT_gate n13 (y[12], a[12]);
NOT_gate n14 (y[13], a[13]);
NOT_gate n15 (y[14], a[14]);
NOT_gate n16 (y[15], a[15]);

endmodule 