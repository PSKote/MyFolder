#include <stdio.h>

int main (int argc, char *argv[])
{

	int val1 = atoi (argv[1]);
	int val2 = atoi (argv[2]);
	int val3 = atoi (argv[3]);

	int i=val1;
	while (i<val2)
	{
		printf("%d\t", i);
		i+=val3;
	}
	printf("\n");	

}
