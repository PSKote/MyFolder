//Compress the entered alphabets

#include <stdio.h>

int main()
{

	int d=0, n=128, p, i;
	char c;
	while (((c=getchar())>='a') && (c<='z'))
	{
		p=c-'a';
		i=16;
		while (i)
		{
			if (i&p)
				d=d|n;
			i/=2;
			n/=2;
			if (n==0)
			{
				printf("%x", d);
				n=128;
				d=0;
			}
		}
	}

	if(n)
		printf("%x", d);

}
