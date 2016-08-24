/*find max|a[i] -a[j]|. i not equal j. theta(n)*/

#include <stdio.h>

int main()
{
	int a[10] = {2,4,7,1,3,5,6,8,9,0};
	int min = a[0];
	int max = a[0];
	int i, n=10;
	for (i=0; i<n; i++)
	{
		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
			max = a[i];
	}
	printf("The maximum difference is %d\n", max-min);
}
