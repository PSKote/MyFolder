//Matrix multuplication

#include <stdio.h>

int main()
{

	int A[3][3], B[3][3], C[3][3], i, j, k;
	for (i=0; i<3; i++)
		for (j=0; j<3; j++)
			scanf("%d", &A[i][j]);

	for (i=0; i<3; i++)
		for (j=0; j<3; j++)
			scanf("%d", &B[i][j]);

	for (i=0; i<3; i++)
		for (k=0; k<3; k++)
		{
			C[i][k]=0;
			for(j=0; j<3; j++)
				C[i][k]=A[i][j]*B[j][k]+C[i][k];
		}


	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
			printf("%d  ", C[i][j]);
		printf("\n\n");
	}

}
