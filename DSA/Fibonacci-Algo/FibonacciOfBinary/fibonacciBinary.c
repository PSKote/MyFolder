/*Find Fibonacci numbers and mod 100. input a 10^6 binary number and fibonacci mod 100 upto that number*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int (*mult(int a[][2], int b[][2]))[2]
{
	int c[2][2];
	
	for(int i =0; i< 2; i++)
	{
		for(int j=0; j < 2; j++)
		{
			int sum =0;
			for(int k=0; k < 2; k++)
			{
				sum = sum + (a[i][k] * b[k][j]);
			}
			c[i][j] = sum%100;
		}
	}

	for(int i =0; i< 2; i++)
	{
		for(int j=0; j < 2; j++)
		{
			a[i][j] = c[i][j];
		}
	}

	return a;
	
} 

int main()
{
	int N[1000000];
	int size=1000000;
  	for (int i = 0; i < 1000000; i++) {
    		N[i] = rand() % 2;
	}

	//int N[3] = {0,1,1};
	//int size=3;
	
	int Y[2][2]={{1,0},{0,1}};
	int A[2][2]={{1,1},{1,0}};

	int (*y)[2], (*a)[2];
	y=Y;
	a=A;
	
	int index=size-1;
	while (index>=0)
	{
		if ((N[index]%2) == 1)
			y=mult(y,a);
		a=mult(a,a);
		
		index--;
	}
	printf("Fibonacci = %d\n", y[1][0]);
}

