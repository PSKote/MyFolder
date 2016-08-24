/*Find a[i]+a[j]=a[k]. theta(n^3)*/
#include <stdio.h>

int main()
{
	int a[10] = {2,4,7,1,3,5,6,8,9,0};
	int i, j, k, n=10, x, flag=0;
	//printf("enter a number=");
	//scanf("%d", &x);
	for (k=0; k<n; k++)
	{
		for (i=0; i<n; i++)
		{
			for (j=0; j<n; j++)
			{
				if (a[i] + a[j] == a[k])
				{
					flag=1;
					break;
				}		
			}
		} 
	}
	if (flag == 1)
		printf("Numbers are present\n");
	else
		printf("Numbers not present\n");
}
