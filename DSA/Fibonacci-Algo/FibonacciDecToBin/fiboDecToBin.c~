/*Find Fibonacci numbers and mod 100. input a 10^6 digit number and fibonacci mod 100 upto that number. here we implement decimal to binary */

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
	
} 

int main()
{
	int D[1000000];
	int size=1000000;
  	for (int i = 0; i < 1000000; i++) {
    		D[i] = rand() % 10;
	}

	//int D[3] = {3,0,3};
	//int size=8;
	//int size=3;
	int N[1000000]={0};
	int j=size-1;
	int newSize=j;

//Implement the logic to convert Decimal to Binary and then store it in array N.

	int index = 0;
	while (index < size)
	{
		int rem = 0;
		for(int i=0; i<size;i++)
		{
			rem = rem*10 + D[i];
			D[i] = rem/2;
			rem = rem%2;

			if(i == size-1)
			{
				N[j] = rem;
				j--;
			}	
		}

		while((index < size) && (D[index] == 0))
			index++;
	}


	for (j=0; j<9; j++)
		printf("%d\t", N[j]);
	printf("\n");
	
	int Y[2][2]={{1,0},{0,1}};
	int A[2][2]={{1,1},{1,0}};

	int (*y)[2], (*a)[2];
	y=Y;
	a=A;
	
	int count=newSize;
	while (count>=0)
	{
		if ((N[count]%2) == 1)
			mult(y,a);
		mult(a,a);
		
		count--;
	}
	printf("Fibonacci = %d\n", y[1][0]);
}
