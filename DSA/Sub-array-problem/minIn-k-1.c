/*Print all the minimum from sub-array length 'k'. theta(nk)*/

#include <stdio.h>

int main()
{
	int a[8] = {10, 0, 5, 5, 3, 7, 12, 6};
	int i, n=8, k, j, min;
	printf("Enter the value of k:");
	scanf("%d", &k);
	for (i=0; i<n-k+1; i++)
	{
		min = a[i];
		for (j=0; j<k; j++)
		{
			if (a[i+j] < min)
				min = a[i+j];
		}
		printf("min. is %d\n", min);
	}
	
}
