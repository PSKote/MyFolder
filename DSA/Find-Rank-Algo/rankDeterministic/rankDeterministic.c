/*Find the numbeer with the given rank. Rank is given as input. Use derterministic Algorithm i.e., Pivot chosen is between n/4 to 3n/4*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int first, last;
int N[1000000],l = 1000000;

int partition(int *N, int l, int r, int p){
	int i=l, j=r;
	while (i<=j){
		while (N[i] <= p)
			i++;
		while (N[j] > p)
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
}

int goodpivot (int *N, int i, int j){
	int num, dig = 0;
	int swap, c, d;
	//bubble sort group of 5 numbers
	while (dig<1000000){
		for (c = dig ; c < ( dig+4 ); c++)
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

	for (num=0; num<1000000; num=num+5){
		int temp;
		temp = N[2+num];
		N[2+num] = N[num];
		N[num] = temp;
		i++;
	}
	int median = i;
	for (c=0; c<median; c++)
	{
		for (d=0; d<median-c-1; d++)
		{
        		swap   = N[d];
       			N[d]   = N[d+1];
     			N[d+1] = swap;			
		}
	}
	return N[median/2];
}

int rank(int *N, int i, int j, int r){
	//logic to pick a good pivot
	int pivot = goodpivot (N, i, j);
	int k = partition (N, i, j, pivot);
	if (r == j-k+1)
		return N[pivot];
	else if (r < j-k+1)
		rank(N, k+1, j, r);
	else
		rank(N, i, k, (r-j+k));
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
	printf ("The number is: %d", num);
	return 0;
}
