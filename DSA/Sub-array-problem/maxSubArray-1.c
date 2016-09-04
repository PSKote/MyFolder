/*Find the maximum sub-array. theta(n^3)*/

#include<stdio.h>

int main()
{
	int a[10] = {10, 9, -7, 6, -5, -3, -4, 11, 20, 2};
	int i, j, k, max = 0, sum = 0;
	int n = 10;
	for(i=0; i<n; i++)
	{
		for (j=i+1; j<n; j++)
		{
			sum = 0;
			for (k=i; k<j+1; k++)
			{
				sum = sum + a[k];
				if(sum > max)
					max = sum;
			}
		}
	}
	printf("The max. sub-array is %d\n", max);
}
