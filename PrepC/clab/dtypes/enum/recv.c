#include<stdio.h>
void packetIdentify(int data)
{
enum petrolpumps {ZLINE=0, MPD, QPD};
enum parityTypes {noparity = 0, odd, even};
int pumps=0, par=0;
par = data & 0xff;
pumps = data >> 8;
if(pumps == ZLINE)
fprintf(stderr,"ZLINE pumps \n");
else if(pumps == MPD)
fprintf(stderr,"MPD pumps \n");
else if(pumps == QPD)
fprintf(stderr,"QPD pumps \n");
else
fprintf(stderr,"Not specified\n");
if(par == noparity)
fprintf(stderr,"No parity was used\n");
else if(par == odd)
fprintf(stderr,"Odd parity was used\n");
else if(par == even)
fprintf(stderr,"Even parity was used\n");
else
fprintf(stderr,"None parity specified\n");
}
int main()
{
int packetrecv;
int i;
for (i=0; i<9; i++)
{
fscanf(stdin,"%d",&packetrecv);
fprintf(stderr,"In recv program, Receiving the packet\n");
packetIdentify(packetrecv);
}
return 1;
}
