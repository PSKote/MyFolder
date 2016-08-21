module computer(reset, clk );
	//input load;
	input reset,clk;
	//input [15:0] in;
	//input [5:0] address_rom;
	//input load_addr;
	
	wire [15:0] pc; wire [15:0] address_cpu; wire [15:0] out_cpu; wire[15:0] istr_rom; wire[15:0] in_ram;
	wire write_cpu;
	//wire [5:0] addr;
	
	cpu c1 (out_cpu ,address_cpu ,pc,write_cpu, istr_rom, reset, clk, in_ram);  
	ram64 c2(in_ram, out_cpu, write_cpu, address_cpu [15:10], clk);
	rom_add c3 (istr_rom, pc [4:0], clk);
	
	//ram64 c3(istr_rom, in, load, addr [5:0], clk);
	//rom_sel_block c4 (addr[5:0], load_addr, address_rom [5:0], pc [15:10]);
	
	

endmodule