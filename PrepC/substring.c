//Check whether the input number is substring or not

#include <stdio.h>

int main()
{

char A[10], B[10], *p, *q;
int i;
printf("Enter the 1st string:");
scanf("%s", A);
printf("Enter the 2nd string:");
scanf("%s", B);
p=A;
q=B;

while(*p!='\0')
{
	i=0;
	while(*(p+i) == *(q+i))
	{
		i++;
		if (*(q+i) == '\0')
			break;
	}
	if (*(q+i) == '\0')
		break;
	p++;
}

if (*(q+i) == '\0')
	printf("Substring");
else
	printf("Not Substring");

}
