/*Find maximum sub-array. theta(n).*/

#include <stdio.h>

int main()
{
	int a[10] = {10, 9, -7, 6, -5, -3, -4, 11, 20, 2};
	int sum = 0, i = 0, j, max = a[1] - a[0], n=10;
	for (j=0; j<n; j++)
	{
		sum = sum + a[j];
		if (sum > max)
			max = sum;
		if (sum < 0)
		{
			i = j+1;
			sum = 0;
		}
	}
	printf("The max. sub-array is %d\n", max);
}
