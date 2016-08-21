module fa_16(sum, cout, a , b, cin);
	output [15:0] sum; output cout;
	input [15:0] a; input [15:0] b; input cin;  

fulladder f1 (sum[0], w1, a[0], b[0], cin );
fulladder f2 (sum[1], w2, a[1], b[1], w1 );
fulladder f3 (sum[2], w3, a[2], b[2], w2 );
fulladder f4 (sum[3], w4, a[3], b[3], w3 );
fulladder f5 (sum[4], w5, a[4], b[4], w4 );
fulladder f6 (sum[5], w6, a[5], b[5], w5 );
fulladder f7 (sum[6], w7, a[6], b[6], w6 );
fulladder f8 (sum[7], w8, a[7], b[7], w7 );
fulladder f9 (sum[8], w9, a[8], b[8], w8 );
fulladder f10 (sum[9], w10, a[9], b[9], w9 );
fulladder f11 (sum[10], w11, a[10], b[10], w10 );
fulladder f12 (sum[11], w12, a[11], b[11], w11 );
fulladder f13 (sum[12], w13, a[12], b[12], w12 );
fulladder f14 (sum[13], w14, a[13], b[13], w13 );
fulladder f15 (sum[14], w15, a[14], b[14], w14 );
fulladder f16 (sum[15], cout, a[15], b[15], w15 );

endmodule



