/*Given a number 'X' find two numbers from array, which sums up to give 'X' . theta(n^2)*/

#include <stdio.h>

int main()
{
	int a[10] = {2,4,7,1,3,5,6,8,9,0};
	int i, j, n=10, x, flag=0;
	printf("enter a number=");
	scanf("%d", &x);
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			if (a[i] + a[j] == x)
			{
				flag=1;
				break;
			}		
		}
	} 
	if (flag == 1)
		printf("Numbers are present\n");
	else
		printf("Numbers not present\n");
}
