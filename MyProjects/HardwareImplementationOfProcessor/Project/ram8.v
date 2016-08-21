`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:49:25 01/09/2016 
// Design Name: 
// Module Name:    ram8 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ram8(out, in ,load, address, clk);

output [15:0] out;
input [15:0] in;
input [2:0] address;
input load, clk;
wire [15:0] outa, outb, outc, outd, oute, outf, outg, outh;
wire loada, loadb, loadc, loadd, loade, loadf, loadg, loadh;


demux_18 d1 (loada, loadb, loadc, loadd, loade, loadf, loadg, loadh, address, load );
	 
register_16 r1 (outa, in, loada, clk);
register_16 r2 (outb, in, loadb, clk);
register_16 r3 (outc, in, loadc, clk);
register_16 r4 (outd, in, loadd, clk);
register_16 r5 (oute, in, loade, clk);
register_16 r6 (outf, in, loadf, clk);
register_16 r7 (outg, in, loadg, clk);
register_16 r8 (outh, in, loadh, clk);

mux16_81 m1 (out, address, outa, outb, outc, outd, oute, outf, outg, outh);

endmodule
