/*Find the number of inversion pair in the array. theta(nlgn)*/

#include <stdio.h>

int c1=0;
 
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
	printf("c=%d\t", c);
	return c;
}

int ip(int *a, int i, int j)
{
	int k,c1,c3;
	if (i<j)
	{
		k=(i+j)/2;
		ip (a, i, k);
		ip (a, k+1, j);
		c3 = mergeip(a, i, j, k);
 		//c1 = c1+c3;
		//printf("c1=%d\t", c1);
		return c3;
	}
}



int main()
{
	int a[10] = {4, 6 ,7, 1, 2, 5};
	int count=0;
	int first = 0;
	int last = 9;
	count = ip(a, first , last);
	printf("The number of inversion pairs are %d\n", count);
}
