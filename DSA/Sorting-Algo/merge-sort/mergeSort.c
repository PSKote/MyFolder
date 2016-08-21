/*Merge Sort. Ascending order. theta(nlgn)*/

#include <stdio.h>

void merge (int *a, int l, int r, int k)
{
	int i=l;
	int j=k+1;
	int num=0;
	int b[10] = {0};

	while (i<=k && j<=r)
	{
		if (a[i] < a[j])	
			b[num++] = a[i++];
		else 
			b[num++] = a[j++];	
	}
	while (i<=k)
	{
		b[num++] = a[i++];
	}
	while (j<=r)
	{
		b[num++] = a[j++];
	}
	num =0;
	i=l;
	while (i<=r)
		a[i++] = b[num++];
}


void mergesort (int *a, int l, int r)
{
	int k;
	if (l <r)
	{
		k = (l+r)/2;
		mergesort(a, l, k);
		mergesort(a, k+1, r);
		merge(a, l, r, k);
	}
}


int main()
{
	int a[10], i, j, t;
	int n=10;
	int first = 0;
	int last = n-1;
	printf("Enter 10 elements:\n");
	for (i=0; i<n; i++)
		scanf("%d", &a[i]);

	mergesort(a, first, last);

	for (i=0; i<n; i++)
		printf ("%d\t", a[i]);
	printf("\n");	
	return 0;
}
