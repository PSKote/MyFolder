/*Find Fibonacci numbers and mod 100. input a 10^6 digit number and fibonacci mod 100 upto that number*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int first, last;
int N[1000000],l = 1000000;

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

void divideby2(int *N){ // integer array passed
	int i =  first;
	int j = last, temp = 0, t;
	while(i <= j)
	{
		t = N[i];
		if(((temp*10 + t) / 2) == 0){
			if( i ==  first)
				first++;	
			temp = t % 2;	
			N[i] = 0;
		} 
		else{
			N[i] = (temp*10 + t) / 2;
			temp = (temp*10 + t) % 2; 
						
		}
		i++;				
	}	
}

int main()
{
	FILE *fp;
	fp = fopen("input","r");
	int i=0;
	for(i = 0; i < l; i++)
	{
		fscanf(fp,"%1d",&N[i]);
	}

	first = 0;
	last = l - 1;

	int A[2][2] = {{1,1},{1,0}};
	int Y[2][2] = {{1,0},{0,1}};
	int (*y)[2],(*x)[2];

	x = A;
	y = Y;

	while(N[first] > 0) 
	{
		if(N[last] != 0) 
			y= MM(y,x);
		x = MM(x,x);
		divideby2(N);
	}

	printf(" %d", y[1][0]);
	printf("\n");
	fclose(fp);
	return 0;
}	