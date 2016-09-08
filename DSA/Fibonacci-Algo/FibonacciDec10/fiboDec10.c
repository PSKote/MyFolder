/*Find Fibonacci numbers and mod 100. input a 10^6 digit number and fibonacci mod 100 upto that number. y=x^(ni)*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

void mult(int a[][2], int b[][2])
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

	//return a;
	
} 

int main()
{
	int N[1000000];
	int size=1000000;
  	for (int i = 0; i < 1000000; i++) {
    		N[i] = rand() % 10;
	}

	//int N[3] = {3, 0, 4};
	//int size = 3;

	int y[2][2] = {{1, 0}, {0, 1}};
	int x[2][2] = {{1, 1}, {1, 0}}; 
	int w[2][2] = {{1,1},{1,0}};

	int index = size-1;

	while(index>=0)
	{
		//y=y*x^(ni)
		while(N[index]>0)
		{
			mult(y,x);
			N[index]=N[index]-1;
		}

		//x=x^10
		for (int i=0; i<9; i++)
			mult(x,w);

		w[0][0] = x[0][0];
		w[0][1] = x[0][1];
		w[1][0] = x[1][0];
		w[1][1] = x[1][1];
		index--;
	}

	printf("Fibonacci = %d\n", y[1][0]);
		
}
