/* Program to find fibnacci number and then mod 100. F(n) = (F(n-1) + F(n-2)) % 100. Exponential time and Linear space.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int rec(int n);
int main(int argc, char *argv[])
{
	int n;
	n = atoi(argv[1]);
	printf("%d\n",rec(n));
	return 0;
	
}

int rec (int n){
		if (n<2) 
			return (n);
		else
			return((rec(n-1)+rec(n-2))%100);
		}
