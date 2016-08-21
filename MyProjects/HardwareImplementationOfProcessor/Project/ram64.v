`timescale 1ns / 1ps

module ram64(out,in,load,address,clk);
input [15:0]in;
input clk,load;
input [5:0] address;
wire a,b,c,d,e,f,g,h;
wire [15:0] ram0,ram1,ram2,ram3,ram4,ram5,ram6,ram7;
output [15:0]out;

demux_18 d1(a,b,c,d,e,f,g,h,address[2:0],load);
ram8 r1(ram0,in,a,address[5:3],clk);
ram8 r2(ram1,in,b,address[5:3],clk);
ram8 r3(ram2,in,c,address[5:3],clk);
ram8 r4(ram3,in,d,address[5:3],clk);
ram8 r5(ram4,in,e,address[5:3],clk);
ram8 r6(ram5,in,f,address[5:3],clk);
ram8 r7(ram6,in,g,address[5:3],clk);
ram8 r8(ram7,in,h,address[5:3],clk);
mux16_81 m1(out,address[2:0],ram0,ram1,ram2,ram3,ram4,ram5,ram6,ram7);

endmodule
