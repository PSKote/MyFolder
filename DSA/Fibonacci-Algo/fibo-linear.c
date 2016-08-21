/* Program to find fibnacci number and then mod 100. F(n) = (F(n-1) + F(n-2)) % 100. Linear time and Constant space.*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int linear(int n);
int main(int argc, char *argv[])
{
	int n;
	n = atoi(argv[1]);
	//scanf("%d",&n);
	printf("%d\n",linear(n));
	return 0;
	
}

int linear (int n){
		int a=0;
		int b=1;
		int c=n;
		int i;
           	for (i=2;i<=n; ++i){
			c=(a+b)%100;
			a=b;
			b=c;
			}
	return c;
		}
