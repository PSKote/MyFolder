/*Fibonacci series of given number. F(n) = (F(n-1) + F(n-2)) mod 100. Using For loop. Linear Time and Linear Space*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int dp(int n);
int main(int argc, char *argv[])
{
	int n;
	n = atoi(argv[1]);
	printf("%d\n",dp(n));
	return 0;
	
}

int f[100000];
int dp (int n){
		int i;
		f[0]=0;
		f[1]=1;
           	for (i=2;i<=n; ++i)
			f [n] =(f[n-1]+f[n-2])%100;
		return f[n];
		}


