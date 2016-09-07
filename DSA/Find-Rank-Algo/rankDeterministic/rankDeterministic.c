/*Find the numbeer with the given rank. Rank is given as input. Use derterministic Algorithm i.e., Pivot chosen is between n/4 to 3n/4*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int rank(int *N, int i, int j, int r);

int first, last;
//int N[10],l = 10; //replace 1000000

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

int goodpivot(int *N, int i, int j)
{
	if ((j-i)<5)
		return ((i+j)/2);
	int group = (i-j+1)/5;
	int beg=i;
	int end = j;
	int num, num1, num2, d, swap;

	for (num =0; num<group; num++, beg+=5)
	{
		for (num1=beg; num1<beg+5; num1++)
		{
			for (num2=beg; num2<(beg+4-num1); num2++)
			{
				if(N[d] > N[d+1])
				{
					swap = N[num2];
					N[num2] = N[num2+1];
					N[num2+1] = swap;
				}				
			}
		}
	}

	if((j-i+1)<=5)
		return ((i+j)/2);

	beg = i;
	end = j;
	int start = i;
	for (num =0; num<group; num++, beg+=5)
	{
		swap = N[start];
		N[start] = N[beg+2];
		N[beg+2] = swap;
		start++;
	}
	return rank(N,i,i+group-1,group/2);
}


int rank(int *N, int i, int j, int r){
	//logic to pick a good pivot
	int pivot;
	//printf("%d\t",i);
	//printf("%d\t",j);
	if (i=j)
	{
		return N[i];
	}
	int p = goodpivot (N, i, j);
	pivot = N[p];
	int k = partition (N, i, j, pivot);
	if (r == j-k+1)
	{
		return N[k];
	}
	else if (r < j-k+1)
	{
		rank(N, k+1, j, r);
	}
	else
	{
		rank(N, i, k, (r-j+k));
	}
}

int main()
{
/*	FILE *fp;
	fp = fopen("input","r");
	int i=0;
	for(i = 0; i < l; i++)
	{
		fscanf(fp,"%1d",&N[i]);
	}*/

	int N[10] = {4, 3, 26, 122, 56, 202, 900, 25, 78, 90};
	int l=10;

	first = 0;
	last = l - 1;

	int r, num;
	printf ("enter the rank=");
	scanf("%d", &r);

	num = rank(N, first, last, r);
	printf ("The number is: %d\n", num);
	return 0;
}
