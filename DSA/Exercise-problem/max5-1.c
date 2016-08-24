/*find max(a[i] -a[j]). j > i+l. theta(n)*/

#include <stdio.h>

int main()
{
	int a[10] = {2,4,7,1,3,5,6,8,9,0};
	int b[10] = {0};
	int i, l, max = a[1] - a[0], j;
	printf("Enter a number:");
	scanf("%d", &l);
	b[0] = a[0];
	for (i=1; i<10; i++)
	{
		if (a[i] < b[i-1])
			b[i] = a[i];
		else 
			b[i] = b[i-1];
		//printf("%d\t", b[i]);
	}
	j=l+1;
	
	while (j<10)
	{
		if ((a[j] - b[j-l-1]) > max)
		{
			max = a[j] - b[j-l-1];
			//printf("%d\t", max);
		}
		j++;
	}
	printf("The maximum difference is %d\n",max);
}
