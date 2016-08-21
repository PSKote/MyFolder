module reg_1bit (out, in, load, clk);
	output out;
	input in, load, clk;
	wire w1;

mux21 r1 (w1, out, in, load );
dff r2 (out, w1, clk);

endmodule 