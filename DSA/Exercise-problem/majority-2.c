/*to find if a mojority number exists in the array. Number is majority if it is present (n/3)+1 times. theta(nlgn). sorting and finding consectutive numbers*/

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

int main()
{
	int i, j, flag=0, count=0;
	int a[10] = {2,2,1,10,7,5,6,8,2,2};
	int n = 10;
	int first = 0;
	int last = 9;
	mergesort(a, first, last);


	while(i<n)
	{
		count = 0;
		int x = a[i];
		while (a[i] == x)
		{
			i++;
			count++;
		}

		//printf("%d", count);
		if (count == ((n/3)+1))
		{
			flag = 1;
			break;
		}
		if (flag == 1)
			break;
	}
	if (flag == 1)
		printf("Present\n");
	else 
		printf("Not Present\n");
	return 0;
}
