module dff(q, d, clk);
	output q;
	input d, clk;
wire q, qbar, w1, w2, w3, w4, w5, w6, w7, w8, w9;

NAND_gate n1 (w1, d, clk);
NOT_gate n3 (w2, d);
NAND_gate n2 (w3, w2, clk);
NAND_gate n4 (w4, w1, w5);
NAND_gate n5 (w5, w3, w4);
NOT_gate n6 (w6, clk);
NAND_gate n7 (w7, w4, w6);
NOT_gate n8(w8, w4);
NAND_gate n9 (w9, w8, w6);
NAND_gate n10 (q, w7, qbar);
NAND_gate n11 (qbar, q, w9);
endmodule 

