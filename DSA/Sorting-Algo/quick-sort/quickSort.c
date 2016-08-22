/*QUick Sort. Ascending Order. worst case - theta(n^2). best case - theta(nlgn)*/


#include <stdio.h>
#include <stdlib.h>

int partition (int *a, int l ,int r, int p)
{
	int i = l;
	int j = r;
	int temp;
	while(i<=j)
	{
		while (a[i] <= p)
			i++;
		while (a[j] > p)
			j--;
		if (i <= j)
		{
			temp = a[j];
			a[j] = a[i];
			a[i] = temp;	
		}
	i++;
	j--;
	}
	return j+1;
}

void quicksort(int *a, int l, int r)
{
	int pivot, k, p;
	if(r>l)
	{
		pivot = rand() % 10;
		//printf("%d\t", pivot);
		p = a[pivot];
		k = partition (a, l ,r, p);
		quicksort(a, l, k);
		quicksort(a, k+1, r); 	
	}
}

int main()
{
	int a[10], i, j;
	int n=10;
	int first = 0;
	int last = n-1;
	printf("Enter 10 elements:\n");
	for (i=0; i<n; i++)
		scanf("%d", &a[i]);

	quicksort(a, first, last);

	for (i=0; i<n; i++)
		printf ("%d\t", a[i]);
	printf("\n");	
	return 0;
}
