/*Inserion Sort. Ascending order. best case - theta(n). worst case - theta(n^2)*/

#include <stdio.h>

int main()
{
	int a[10], i, j, t;
	int n=10;
	printf("Enter 10 elements:\n");
	for (i=0; i<n; i++)
		scanf("%d", &a[i]);

	for (i=0; i<n ;i++)
	{
		t = a[i];
		j = i-1;
		while ((a[j] > t) && ( j >= 0))
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = t;
	}

	for (i=0; i<n; i++)
		printf ("%d\t", a[i]);
	printf("\n");	
	return 0;
}
