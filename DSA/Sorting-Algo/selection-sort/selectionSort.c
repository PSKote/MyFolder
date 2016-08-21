/*Selection Sort. Ascending order. Theta(n^2)*/

#include <stdio.h>

int main()
{
	int a[10], i, j, temp, m;
	int n=10;
	printf("Enter 10 elements:\n");
	for (i=0; i<n; i++)
		scanf("%d", &a[i]);

	for (i=0; i<n ;i++)
	{
		m=0;
		for (j=1; j<n-i; j++)
		{
			if (a[m] < a[j])
			{
				m = j;
			}
		}
		temp = a[m];
		a[m] = a[n-i-1];
		a[n-i-1] = temp;
	}

	for (i=0; i<n; i++)
		printf ("%d\t", a[i]);
	printf("\n");	
	return 0;
}
