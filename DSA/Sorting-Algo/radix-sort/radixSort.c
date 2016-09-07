/*Program to perform Radix Sort. theta(nd). d - no. of digits*/

#include<stdio.h>
#include<math.h>

int main()
{
	int a[7] = {678, 343, 328, 129, 760, 141, 512};
	int i, n = 7, c[7] = {0}, j, d=3, k=10, p;
	for (j=0; j<d; j++)
	{
		int b[10] = {0};
		for (i=0; i<n; i++)
		{
			p = a[i]/pow(10,j);
			b[p%10]++;
		}
		for (i=1; i<k; i++)
		{
			b[i] = b[i-1] + b[i];
		}
		for (i=n-1; i>=0; i--)
		{
			p = a[i]/pow(10,j);
			c[b[(p%10)]-1] = a[i];
			b[(p%10)]--;
		}
		for (i=0; i<n; i++)
		{
			a[i] = c[i];
		}
	}
	for (i=0; i<n; i++)
	{
		printf("%d\t", c[i]);
	}
	printf("\n");
}
