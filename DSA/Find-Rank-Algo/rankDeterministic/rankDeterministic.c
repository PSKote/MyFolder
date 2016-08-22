/*Find the numbeer with the given rank. Rank is given as input. Use derterministic Algorithm i.e., Pivot chosen is between n/4 to 3n/4*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int first, last;
int N[10],l = 10; //replace 1000000

int partition(int *N, int l, int r, int p){
	int i=l, j=r;
	while (i<=j){
		while ((N[i] <= p) && (i <= r) )
			i++;
		while ((N[j] > p) && (j >= l) )
			j--;
		if (i <= j){
			//swap(N[j], N[i]);
			int temp;
			temp = N[j];
			N[j] = N[i];
			N[i] = temp;
		}
		i++; 
		j--;
	}
	return j+1;
}

int goodpivot (int *N, int i, int j){
	int num, dig = 0;
	int swap, c, d, z=0;
	//bubble sort group of 5 numbers
	while (dig<10){	//replace 1000000
		for (c = dig ; c < ( dig+5 ); c++)
  		{
    			for (d = dig ; d < (dig+4-c); d++)
    			{
      				if (N[d] > N[d+1]) 
      				{
        				swap   = N[d];
       					N[d]   = N[d+1];
        				N[d+1] = swap;
      				}
    			}
 	 	}
		dig = dig + 5;	
	}

	for (num=0; num<10; num=num+5){		//replace 1000000
		int temp;
		temp = N[2+num];
		N[2+num] = N[num];
		N[num] = temp;
		z++;
	}
	int median = z-1;
	for (c=0; c<median; c++)
	{
		for (d=0; d<median-c-1; d++)
		{
			if (N[d] > N[d+1])
			{
        			swap   = N[d];
       				N[d]   = N[d+1];
     				N[d+1] = swap;	
			}		
		}
	}
	printf("median = %d\t", median/2);
	return N[median/2];
}

int rank(int *N, int i, int j, int r){
	//logic to pick a good pivot
	printf("%d\t", j);
	printf("%d\t", i);
	int pivot = goodpivot (N, i, j);
	printf("%d\t", pivot);
	int k = partition (N, i, j, pivot);
	printf("%d\t", k);
	if (r == j-k+1)
	{
		printf("Hell0ret\n");
		return pivot;
	}
	else if (r < j-k+1)
	{
		printf("Hell01\n");
		rank(N, k+1, j, r);
	}
	else
	{
		printf("Hell02\n");
		rank(N, i, k, (r-j+k));
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

	int r, num;
	printf ("enter the rank=");
	scanf("%d", &r);

	num = rank(N, first, last, r);
	printf ("The number is: %d\n", num);
	return 0;
}
