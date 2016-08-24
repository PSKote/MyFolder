/*find max(a[i] -a[j]). j > i+l. theta(n)*/

#include <stdio.h>

int main()
{
	int a[10] = {2,4,7,1,3,5,6,8,9,0};
	int i=0, max = a[1] - a[0], n=10, j, l;
	printf("Enter a number:");
	scanf("%d", &l);
	for (j=l+1; j<n; j++)
	{
		if ((a[j]-a[i])>max)
			max=a[j]-a[i];
		if (a[j-l]<a[i])
			i=j-l;
	}
	printf("The maximum difference is %d\n",max);
}
