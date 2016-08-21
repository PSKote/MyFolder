//Print only the last line of the file

#include <stdio.h>

int main()
{

char c;
FILE *fp;
fp = fopen ("/home/prajwal/Desktop/CProg/reversealpha","r");

fseek(fp,-1,2);
while ((c=getc(fp))!='\n')
	fseek(fp,-2,1);

while((c=getc(fp))!=EOF)
	printf("%c",c);
fclose(fp);
}
