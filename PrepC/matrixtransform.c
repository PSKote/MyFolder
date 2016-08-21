//Find the transform of a given matrix

#include <stdio.h>

int main()

{

	int A[3][3], i, j, temp;
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
			scanf("%d", &A[i][j]);
	}

	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
			printf("%d", A[i][j]);
		printf("\n");	
	}
	
	printf("\n\n");

	for(i=0; i<2; i++)
		for(j=i+1; j<3; j++)
		{
			temp = A[i][j];
			A[i][j] = A[j][i];
			A[j][i] = temp;
		}
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
			printf("%d", A[i][j]);
		printf("\n");	
	}

}
