//Calculator. calculation to be performed is given in a file

#include <stdio.h>

int main(int argc, char *argv[])
{

char c;
int n;
FILE *fp;

fp = fopen (argv[1],"r");

if (fp!=NULL)
{
	while((c=fgetc(fp))!=EOF)
	{
		int val1, val2;
		char val;
		val1 = (int) c-'0';
		getc(fp);
		val = fgetc(fp);
		getc(fp);
		c = fgetc(fp);
		val2 = (int) c-'0';
		fgetc(fp);
			
		//printf("%d\n", val1);
		//printf("%d\n", val2);

		if (val == '+')
			printf("%d\n", val1+val2);
		else if (val == '-')
			printf("%d\n", val1-val2);
		else if (val == '/')
			printf("%f\n", (float)val1/val2);
		else if (val == '*')
			printf("%d\n", val1*val2);
	}
}
//printf("\n");
fclose(fp);
}
