/*Find the numbers whose ranks are given. The list of ranks are stored in an array of size 10^4. Find all 10^4 numbers whic has that rank*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int first, last;
int N[1000000],l = 1000000, R[10000];

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
	int num, dig = 0, i=0;
	int swap, c, d;
	//bubble sort group of 5 numbers
	while (dig<1000000){
		for (c = dig ; c < ( dig+5 ); c++)
  		{
    			for (d = dig ; d < (dig+5-c); d++)
    			{
      				if (N[d] > N[d+1]) 
      				{
        				swap       = N[d];
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
	return N[i/2];
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
	int i=0, r , num;
	for(i = 0; i < l; i++)
	{
		fscanf(fp,"%1d",&N[i]);
	}

	first = 0;
	last = l - 1;

	for (i=0; i<10000; i++){
		R[i] = rand() % 1000000;
	}

	for (i=0; i< 10000; i++){
		r = R[i];
		num = rank(N, first, last, r);
		printf ("The number is: %d", num);
	}
	return 0;
}
