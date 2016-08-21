//Concatenation of 2 strings using pionters

#include <stdio.h>

int main()
{

char A[10], B[10], *p, *q;
int i, j=0;
printf("Enter the 1st string:");
scanf("%s", A);
printf("Enter the 2nd string:");
scanf("%s", B);
p=A;
q=B;

i=0;
while (*(p+i)!='\0')
	i++;
while (((*(p+i+j))=(*(q+j)))!='\0')
	j++;

printf("Output:");
printf("%s\n", A);

}
