//Create a pattern of box with 'X' and ' '

#include <stdio.h>

int main()

{

	int i, j;
	
	for (i=0; i<20; i++)
	{
		for (j=0; j<20; j++)
		{
			if ((i==0)||(i==19)||(j==0)||(j==19))
				printf("X");
			else
				printf(" ");
		}
		printf("\n");
	}

}
