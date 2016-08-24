/*Find a[i]+a[j]=a[k]. theta(n^2)*/

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
	int a[10] = {2,4,7,1,3,5,6,8,9,0};
	int i, j, n=10, x, new, flag= 0, k;
	//printf("enter a number=");
	//scanf("%d", &x);
	int first = 0;
	int last = 9;
	//sorting the array
	mergesort(a, first, last);

	for (k=0; k<n; k++)
	{
		int l=first, r=last;
		while (l<=r)
		{
			if (a[l]+a[r] == a[k])
			{
				flag = 1;
				break;
			}
			else if (a[l]+a[r] < a[k])
				l++;
			else 
				r--;
		}
	}	

	if (flag == 1)
		printf("Present\n");
	else
		printf("Not Present\n");
	return 0;
}
