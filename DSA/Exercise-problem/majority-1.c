/*to find if a mojority number exists in the array. Number is majority if it is present (n/3)+1 times. theta(n^2)*/

#include <stdio.h>

int main()
{
	int c, i, j, flag=0;
	int a[10] = {2,2,1,10,7,5,6,2,2,2};
	for (i=0; i<10; i++)
	{
		c=0;		
		for (j=0; j<10; j++)
		{	
			if (a[i] == a[j])
			c++;
			if (c == (10/3)+1)
			{
				flag =1;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	if (flag == 1)
		printf("Present\n");
	else 
		printf("Not Present\n");
	return 0;	
}
