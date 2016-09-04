/*Find the maximum sub-array. theta(n^2)*/

#include<stdio.h>

int main()
{
	int a[10] = {10, 9, -7, 6, -5, -3, -4, 11, 20, 2};
	int i, j, max = 0, sum = 0;
	int n = 10;
	for(i=0; i<n; i++)
	{
		sum = 0;
		for (j=i; j<n; j++)
		{
			sum = sum + a[j];
			if(sum > max)
				max = sum;
		}
	}
	printf("The max. sub-array is %d\n", max);
}
