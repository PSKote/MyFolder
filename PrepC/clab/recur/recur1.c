#include <stdio.h>

int main()
{

	int n;
	printf("Enter the number:");
	scanf("%d", &n);
	printf("The the factorial of 6 is %d\n",fact(n));	

}

int fact(int n)
{
if (n == 1) return 1;
else return n * fact(n - 1);
}
