module newalu (out, zr, ng, c, x, y);
	output [15:0]out;
	output zr, ng;
	input [15:0]x; input [15:0]y; input [5:0]c ;
	wire zz, xx, yy,cz;
	wire [15:0] s, aa, r, notr, l, notl, n ,notn, m, o, p, q;

mux_16_21 m1 (l, x, 16'b0000000000000000, c[0]);

notgate_16 n1 (notl, l);

mux_16_21 m2 (m, l, notl, c[1]);

mux_16_21 m3 (n, y, 16'b0000000000000000, c[2]);

notgate_16 n2 (notn, n);

mux_16_21 m4 (o, n, notn, c[3]);

and_16 a1 (p, m, o);

fa_16 f1 (q, cz, m, o, 1'b0);

mux_16_21 m5 (r, p, q, c[4]);

notgate_16 n3 (notr, r);

mux_16_21 m6 (out, r, notr, c[5]);

mux_16_21 m7 (s, r, notr, c[5]);

mux21 m8 (ng, 1'b1, 1'b0, s[15]);

mux_16_21 m9 (aa, r, notr, c[5]);

or8_gate o1 (xx, aa[7:0]);

or8_gate o2 (zz, aa[15:8]);

or_gate o3 (yy, xx, zz);

NAND_gate ng1 (zr, yy, yy);

endmodule 