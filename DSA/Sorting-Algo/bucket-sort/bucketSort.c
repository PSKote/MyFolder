/*Program to perform Bucket Sort. worst case - O(n^2)*/

#include<stdio.h>


int main()
{
	int a[7] = {678, 343, 328, 129, 760, 141, 512};
	int n = 7, d = 3, k = 10, i, p, c[7] = {0};
	int b[10] = {0};
	for (i=0; i<n; i++)
	{
		p = a[i]/100;
		b[p%10]++;
		//printf("p=%d, b=%d\n", p%10, b[p%10]);
	}
	for (i=1; i<k; i++)
	{
		b[i] = b[i-1] + b[i];
	}
	for (i=n-1; i>=0; i--)
	{
		p = a[i]/100;
		c[b[(p%10)]-1] = a[i];
		b[p%10]--;
	}
	for (i=0; i<n; i++)
	{
		a[i] = c[i];
	}

	for (i=1; i<n; i++)
	{
		if((a[i-1]/100) == (a[i]/100))
			buc[i] = a[i-1];
	}

	for (i=0; i<n; i++)
	{
		printf("%d\t", c[i]);
	}
	printf("\n");
}
