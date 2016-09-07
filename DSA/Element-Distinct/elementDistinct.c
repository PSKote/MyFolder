/*Report whether the array has distinct element or not. O(nlgn)*/

#include<stdio.h>

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
	int a[10] = {2, 4, 6, 9, 8, 1, 3, 0, 5, 9}, i, flag = 0;
	int n=10;
	int first = 0;
	int last = n-1;

	mergesort(a, first, last);

	for (i=0; i<n-1; i++)
	{
		if (a[i] == a[i+1])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("There is repitition\n");
	}	
	else 
		printf("No repitition\n");
	return 0;
}
