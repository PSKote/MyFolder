/*Find the maximum sub-array. theta(nlgn). Kadane's Algorithm*/

#include<stdio.h>
#include<limits.h>

int max(int a, int b)
{
	if (a>=b)
		return a;
	else 
		return b;
}

int maxSubArray (int *a, int low, int high)
{
	int i;
	if(low == high)
		return a[low];

	int mid = (low+high)/2;
	int LSS = maxSubArray(a, low, mid);
	int RSS = maxSubArray(a, mid+1, high);
	int ls = INT_MIN, rs = INT_MIN;

	int sum = 0;
	for (i=mid; i>=low; i--)
	{
		sum = sum +a[i];
		ls = max(ls,sum);
	}

	sum = 0;
	for (i=mid+1; i <=high; i++)
	{
		sum = sum + a[i];
		rs = max(rs,sum);
	} 
	int ans = max(LSS, RSS);
	return max(ans, ls+rs);		

}

int main()
{
	int a[10] = {10, 9, -7, 6, -5, -3, -4, 11, 20, 2};
	int n = 10, max = 0;
	int low = 0, high =n-1;
	max = maxSubArray(a, low, high);
	printf("The max. sub-array is %d\n", max);
}


