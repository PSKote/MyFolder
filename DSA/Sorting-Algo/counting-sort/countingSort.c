/*Program to perform Counting Sort. theta(n)*/

#include<stdio.h>

int main()
{	
	int a[10] = {6, 7, 4, 3, 1, 1, 0, 9, 5, 8};
	int b[10] = {0}, c[10] = {0}, i, k = 10, n = 10;

	for (i=0; i<n; i++)
	{
		b[a[i]]++;
	}
	for (i=1; i<k; i++)
	{
		b[i] = b[i-1] + b[i];
	}
	for (i=n-1; i>=0; i--)
	{
		c[b[a[i]]-1] = a[i];
		b[a[i]]--;
	}
	for (i=0; i<n; i++)
	{
		printf("%d\t", c[i]);
	}
	printf("\n");
}
