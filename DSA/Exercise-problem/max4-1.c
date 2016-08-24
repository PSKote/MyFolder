/*find max(a[i] -a[j]). i < j. theta(n^2)*/
#include <stdio.h>

int main()
{
	int a[10] = {2,4,7,1,3,5,6,8,9,0};
	int max = 0;
	int i, j, n=10;
	for (i=0; i<n; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if ((a[j]-a[i]) > max)
				max = (a[j]-a[i]);
		}
	}
	printf("The maximum number is %d\n", max);
}
