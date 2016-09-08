/*Find Fibonacci numbers and mod 100. input a 10^6 digit number and fibonacci mod 100 upto that number*/

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

int divideby2(int n[])
{
	int rem=0, i=0, index=0;
	int len=1000000; //size of N that is passed from main
	while(i<len) //size of N that is passed from main
	{
		rem=rem*10+n[i];
		n[i]=rem/2;
		rem=rem%2;
		i++;
	}

/*	for(i=0; i<len; i++)
		printf("%d\t",n[i]);
	printf("\n");*/

	while((index<len) && (n[index] == 0))
	{
		index++;
		//printf("Index=%d, n[Index]=%d", index, n[index]);
	}
	return index;
}

int main()
{
	int N[1000000];
	int size=1000000;
  	for (int i = 0; i <= 1000000; i++) {
    		N[i] = rand() % 10;
	}

	//int N[3] = {3, 0, 5};
	//int size = 3;
	
	int Y[2][2]={{1,0},{0,1}};
	int A[2][2]={{1,1},{1,0}};

	int (*y)[2], (*a)[2];
	y=Y;
	a=A;
	
	int index=0;
	while (index<size)
	{
		if ((N[size-1]%2) == 1)
			mult(y,a);
		mult(a,a);
		
		index = divideby2(N);
	}
	printf("Fibonacci = %d\n", y[1][0]);
}

