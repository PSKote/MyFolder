/*Find the number which has the given rank (rank is given as input). Use random pivot algorithm*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int first, last;
int N[1000000],l = 1000000;

int partition(int *N, int l, int r, int p){
	int i=l, j=r;
	while (i<=j){
		while ((N[i] <= p) && (i <= r) )
		{
			i++;
			//printf("i= %d\t", i);
		}
		while ((N[j] > p) && (j >= l) )
		{
			j--;
			//printf("j= %d\t", j);
		}
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

int rank(int *N, int i, int j, int r){
	//printf("%d\t", j);
	//printf("%d\t", i);
	int p = rand() % (j-i+1) + i;
	//printf("%d\t", p);
	int pivot = N[p];
	//printf("%d\t", pivot);
	int k = partition (N, i, j, pivot);
	//printf("%d\t", k);
	if (r == j-k+1)
	{
		//printf("Hell0ret\n");
		return N[p];
	}
	else if (r < j-k+1)
	{
		//printf("Hell01\n");
		rank(N, k+1, j, r);
	}
	else
	{
		//printf("Hell02\n");
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

	//int N[7] = {4, 3, 26, 122, 56, 202, 900};
	//int l=7;

	first = 0;
	last = l - 1;

	int r, num;
	printf ("enter the rank=");
	scanf("%d", &r);

	num = rank(N, first, last, r);
	printf ("The number is: %d", num);
	return 0;
}
