//Reverse the line of the file

#include <stdio.h>

int main()
{

int count=0, i=0, d=0;
char c;
FILE *fp;
fp = fopen ("/home/prajwal/Desktop/CProg/reversealpha","r");

while ((c=getc(fp))!=EOF)
	count++;

fseek(fp,-1,2);

while (count)
{
	while (((c=getc(fp))!='\n')||(ftell(fp)!=0))
	{
		i++;
		fseek(fp,-2,1);
		count--;
	}


	while(((c=getc(fp))!='\n')||(c!=EOF))
		printf("%c", c);
	printf("\n");
	d=-i-3;
	fseek(fp,d,2);

}
fclose(fp);
}
