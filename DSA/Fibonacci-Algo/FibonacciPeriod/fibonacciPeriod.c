/*Generate Fibonnaci numbers. F(n)=F(n-1)+F(n-2) mod 100. Using an Algorithm the sequence repeates after 6*modulus number (Pisano Algorithm)*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
	//int n[4] = {6, 0, 5, 8};
	//int len = 4;

	int n[1000000];
	int len=1000000;
  	for (int i = 0; i < 1000000; i++) {
    		n[i] = rand() % 10;
	}
	int m=100, p=0, rem=0, i;
	int fib[600];
	
	fib[0] = 0;
	fib[1] = 1;
	for(i = 2; i< (6*m) ; i++)
	{
		fib[i] = (fib[i-1]+ fib[i-2])%m;
	}

	for(i = 2; i<= (6*m); i++)
	{
		if((fib[i] == 0) && (fib[i+1] == 1))
		{
			p = i;
			break;
		}	
	}

	for(i=0; i<len; i++)
	{
		rem = rem*10+ n[i];
		rem = rem%p;
	}
	printf("Fibonacci = %d\n", fib[rem]);
}
