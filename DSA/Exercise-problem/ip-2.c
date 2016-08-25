/*Find the number of inversion pair in the array. theta(nlgn)*/

#include <stdio.h>

//int c1=0;
 
int mergeip(int *a, int i, int j, int k)
{
	int c=0;
	int l=i;
	int r=k+1;
	while (l<=k && r<=j)
	{
		if (a[l] <= a[r])
		{
			l++;
		}
		else if (a[l]>a[r])
		{
			r++;
			c=c+k-l+1;
		}
	}
	while (l<=k)
		l++;
	while (r<=j)
		r++;
	//printf("c=%d\t", c);
	return c;
}

int ip(int *a, int i, int j)
{
	int k, c1=0;
	if (i<j)
	{
		k=(i+j)/2;
		c1 += ip (a, i, k);
		c1 += ip (a, k+1, j);
		c1 += mergeip(a, i, j, k);
		//printf("c1=%d\t", c1);
	}
	return c1;
}



int main()
{
	int a[10] = {4, 2, 1, 6, 7, 3, 0, 9, 8, 5};
	int count=0;
	int first = 0;
	int last = 9;
	count = ip(a, first , last);
	printf("The number of inversion pairs are %d\n", count);
}
