//Count the occurance of all letters, space, . and ,

#include <stdio.h>

int main()
{

char c;
int a[29]={0};
int i, d;
FILE *fp;
fp = fopen ("/home/prajwal/Desktop/CProg/reversealpha","r");

while ((c=getc(fp))!=EOF)
{
	d=c-'a';
	if ((d>=0)&&(d<=25))
		a[d]+=1;
	else if (c =='.')
		a[26]+=1;
	else if (c == ',')
		a[27]+=1;
	else if (c==' ')
		a[28]+=1;
}

int l=0;
for (i=1;i<29;i++)
	if (a[i]>a[l])
		l=i;
if (l<26)
	printf("%c", 'a'+l);
else if (l==26)
	printf("."); 
else if (l==27)
	printf(","); 
else if (l==28)
	printf(" "); 

fclose(fp);

}
