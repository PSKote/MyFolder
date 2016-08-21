//Find if the number is prime

#include <stdio.h>
#include <math.h>

int main ()
{

	int n, i, flag=0;

	printf("Enter a number=");
	scanf("%d", &n);

	
	if (n%2 == 0)
	{
		flag = 1;
		
	}
	else
	{
		for(i=3; i<=sqrt(n); i+2)			
		{
			int x = n%i;
			if(x == 0)
			{
				flag = 1;
				break;
			}
		}
	
	}
	if(flag == 0)
		printf(" Prime");
	else
		printf("Not Prime");	

}
