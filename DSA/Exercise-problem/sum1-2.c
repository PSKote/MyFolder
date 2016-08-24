/*Given a number 'X' find two numbers from array, which sums up to give 'X' . theta(nlgn)*/

#include <stdio.h>


void merge(int *a, int i, int j, int k)
{
	int l = i;
	int m = k+1;
	int num = 0;
	int b[10] = {0};
	while (l<=k && m<=j)
	{
		if (a[l] < a[m])
			b[num++] = a[l++];
		else 
			b[num++] = a[m++]; 
	}
	while (l<=k)
	{
		b[num++] = a[l++];
	}
	while (m<=j)
	{
		b[num++] = a[m++];
	}
	num = 0;
	l = i;
	while (l<=j)
		a[l++] = b[num++];
}

void mergesort(int *a, int i, int j)
{
	int k;
	if (i<j)
	{
		k = (i+j)/2;
		mergesort(a, i, k);
		mergesort(a, k+1, j);
		merge(a, i, j, k);
	}
}

int binarysearch(int *a, int i, int j, int new)
{
	int flag = 0, middle;
	middle = (i+j)/2;
	while (i<=j)
	{
		if (a[middle] < new)
			i = middle + 1;
		else if (a[middle] == new)
		{
			flag = 1;
			break;
		}
		else 
			j = middle - 1;

		middle = (i+j)/2;
	}
	if (flag == 1)
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	int a[10] = {2,4,7,1,3,5,6,8,9,0};
	int i, j, n=10, x, new, flag= 0;
	printf("enter a number=");
	scanf("%d", &x);
	int first = 0;
	int last = 9;
	//sorting the array
	mergesort(a, first, last);

	for (i=0; i<n; i++)
	{
		new = x - a[i];
		flag = binarysearch(a, first, last, new);
		if (flag == 1)
			break;
	} 
	if (flag == 1)
		printf("Present\n");
	else
		printf("Not Present\n");
	return 0;
}
