`timescale 1ns / 1ps

module rom_add(istr, pc, clk);

input [4:0] pc;
input clk;
output [15:0] istr;
reg  [15:0] istr;

always @ (posedge clk)
begin
case(pc)
5'b00000: istr = 16'b0000000000001010;
5'b00001: istr = 16'b1110000011010000;
5'b00010: istr = 16'b1110111110010000;
5'b00011: istr = 16'b0000000000010001;
5'b00100: istr = 16'b1110001100001000;
endcase
end
endmodule