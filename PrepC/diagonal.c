//Print the Diagonal with 'X' and others with ' ' to generate a pattern

#include <stdio.h>

int main()

{

	int i, j;
	
	for (i=0; i<20; i++)
	{
		for (j=0; j<20; j++)
		{
			if ((i==j)||(i+j==19))
				printf("X");
			else
				printf(" ");
		}
		printf("\n");
	}

}