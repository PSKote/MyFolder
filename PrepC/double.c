//Double the number given a file 

#include <stdio.h>

int main()
{

char c;
int n;
FILE *fp, *fpw;
//fpw = fopen ("/home/prajwal/Desktop/CProg/output","w");
fp = fopen ("/home/prajwal/Desktop/CProg/data","r");

if (fp!=NULL)
{
	n=0;
	while((c=getc(fp))!=EOF)
	{
		n=n*10+c-'0';
		getc(fp);
	}
n*=2;
}
printf("Double of number is=%d\n", n);
fclose(fp);
}
