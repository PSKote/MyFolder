//Convert Lower Case to upper case

#include <stdio.h>

int main()
{

	char c;
	c=getchar();
	if ((c>='a') && (c<='z'))
		c='A'+c-'a';
	printf("%c",c);

}
