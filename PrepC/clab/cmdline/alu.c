//Implementation of ALU

#include <stdio.h>

int main(int argc, char *argv[])
{

int val = atoi (argv[1]);
int a[8]={0};
char *b[8]={"Recent-Memory-Search", "Updating-cache", "RMA", "DMA",  "Decoding", "Encoding", "Demultiplexer", "Multiplexer"};
int count=0, j=0;

int i=128;

while (i)
{
	if(i&val)
		a[j]=1;
	else	
		a[j]=0;
	i/=2;
	j++;
}

int k;
for (k=0; k<8; k++)
	printf("%d", a[k]);
printf("\n");


for (j=0; j<8; j++)
{
	if (a[j] == 1)
		printf("%s selected\n", b[j]);
	else 
		count+=1;
}
	
if (count == 8)
{
	printf("Select Menu\n");
	printf("0x01: multiplexer\n");
	printf("0x02: demultiplexer\n");
	printf("0x04: encoding\n");
	printf("0x08: decoding\n");
	printf("0x10: dma\n");
	printf("0x20: rma\n");
	printf("0x40: updating-cache\n");
	printf("0x80: recent-memory-search\n");
	
}
printf("\n");
}
