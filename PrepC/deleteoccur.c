//Delete if the same Alphbet is reperated in the word

#include <stdio.h>

int main()
{

char A[10], *p;
int i, j;

printf("Enter the string:");
scanf("%s", A);

p=A;

while (*p!='\0')
{
	j=1;
	while(*(p+j)!='\0')
	{
		if(*p == *(p+j))
		{
			i=j;
			while ((*(p+i)=*(p+i+1))!='\0')
				i++;
		}
		else
			j++;
	}
p++;
}
printf("Output is: %s\n", A);

}
