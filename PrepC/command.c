//Example code to show the use of command line arguments

#include<stdio.h>
int main(int argc, char *argv[])
{
int i;
printf("command-line arguments:");
for (i=0; i<6; i++)
	printf("%s\t",argv[i]);
printf("\n");
printf("Length = %d", argc);
printf("\n");
}
