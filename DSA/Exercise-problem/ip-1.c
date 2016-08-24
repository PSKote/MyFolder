/*Find the number of inversion pair in the array. theta(n^2)*/

#include <stdio.h>

int main()
{
	int a[10] = {2,4,7,1,3,5,6,8,9,0};
	int c=0, i ,j;
	for (i=0; i<10; i++)
	{
		for (j=i+1; j<10; j++)
		{
			if (a[i] > a[j])
				c++;
		}
	}
	printf("The number of inversion pairs are %d\n", c);
}
