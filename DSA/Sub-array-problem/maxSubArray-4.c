/*Find maximum sub-array. Add up all the terms in the array and then use the algorithm for finding max(p[j] - p[i]) with j>i. theta(n). here the sum might go out of bound*/

#include <stdio.h>

int main()
{
	int a[10] = {10, 9, -7, 6, -5, -3, -4, 11, 20, 2};
	int p[10] = {0};
	int i, j, max, sum1 = 0;
	int n = 10;
	
	for (i=0; i<n; i++)
	{
		sum1 = sum1 + a[i];
		p[i] = sum1;
	}

	i=0;
	max =  0;
	for (j=0; j<n; j++)
	{
		if ((p[j] - p[i]) > max)
			max = (p[j] - p[i]);
		if (p[j] < p[i])
			i = j;
	}
	printf("The max. sub-array is %d\n", max);
}
