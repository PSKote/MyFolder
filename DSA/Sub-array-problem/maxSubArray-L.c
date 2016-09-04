/*Find max. sub-array of length 'l'. theta(n)*/

#include <stdio.h>

int main()
{
	int a[10] = {10, 9, -7, 6, -5, -3, -4, 11, 20, 2};
	int i, l, n=10, j, sum=0;
	printf("Enter a number:");
	scanf("%d", &l);
	int max=0;
	for (i=0; i<l; i++)
	{
		max = max +a[i];
	}
	j = 0;
 	sum = max;
	for(i=l; i<n; i++)
	{
		sum = sum + a[i] - a[j];
		j++;
		if (sum > max)
			max = sum;
	} 
	printf("The max. sub-array is %d\n", max);
}
