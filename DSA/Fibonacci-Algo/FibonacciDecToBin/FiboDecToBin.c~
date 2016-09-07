/*Find Fibonacci numbers and mod 100. input a 10^6 digit number and fibonacci mod 100 upto that number. here we implement decimal to binary */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int first, last;
int N[1000000] = {0},l = 1000000, D[1000000] = {0};

int (*MM(int A[][2], int B[][2]))[2]{  
	
	int r,s,t,u;
	static int C[2][2]; 
	
	r = (A[0][0] * B[0][0] + A[0][1] * B[1][0])%100;
	s = (A[0][0] * B[0][1] + A[0][1] * B[1][1])%100;
	t = (A[1][0] * B[0][0] + A[1][1] * B[1][0])%100;
	u = (A[1][0] * B[0][1] + A[1][1] * B[1][1])%100;
	
	C[0][0] = r;
	C[0][1] = s;
	C[1][0] = t;
	C[1][1] = u;		
	
	return C;
}

int main()
{
	FILE *fp;
	fp = fopen("input","r");
	int i=0, j=0;
	for(i = 0; i < l; i++)
	{
		fscanf(fp,"%1d",&D[i]);
	}

//Implement the logic to convert Decimal to Binary and then store it in array N.

	while (D[l-1]!=0)
	{
		for(i=0; i<l; i++)
		{
			int rem = 0;
			rem = rem*10+D[i];
			D[i] = rem / 2;
			rem=rem%2;
			if(i==(l-1))
			{
				N[j] = rem;
				j++;
			}
		}
	}

	first = 0;
	last = l - 1;


	int A[2][2] = {{1,1},{1,0}};
	int Y[2][2] = {{1,0},{0,1}};
	int (*y)[2],(*x)[2];

	x = A;
	y = Y;

	while(first < last) 
	{
		if((N[last]%2) != 0) 
			y= MM(y,x);
		x = MM(x,x);
		last--;
	}

	printf(" %d", y[1][0]);
	printf("\n");
	fclose(fp);
	return 0;
}	
