/*Find the minimum length sub-array whose sum is atleast 'S'*/

#include<stdio.h>

int main()
{
	int a[10] = {10, 9, 7, 6, 5, 3, 4, 11, 20, 2};
	int i=0, min = 11, n =10, j, sum = 0, S, sum1;
	printf("Enter the sum:");
	scanf("%d", &S);
	for (j=0; j<n; j++)
	{
		sum = sum + a[j];
		//printf("Sum = %d\t", sum);
		if (sum > S)
		{
			if (min > j-i+1)
				min = j-i+1;
		}
		while(sum > S)
		{
			sum = sum - a[i];
			//printf("Sum = %d\t", sum);
			i++;
			min = j-i+1;
		}
	}
	if (min == 11)
		printf("Sum not present\n");
	else
		printf("Min. sub-array where sum is found is: %d\n", min);
}
