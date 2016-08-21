#include <stdio.h>
//#include <limits.h>

int main(int argc, char *argv[])
{

FILE *in, *out;
char ch;
in = fopen(argv[2], "r");
out = fopen(argv[3],"w");
char value[100][100];
int th = atoi(argv[1]);
int i = 0, temp;
ch = fgetc(in);
while(ch != EOF){
	int j = 0;
	
	if(i < 5)
	{
		while(ch != '\n')
		{
			value[i][j] = ch;
			j++;
			ch = fgetc(in);
		}
		i++;
		//printf("%s \n",value[i-1]);
		fprintf(out, "%s\n", value[i-1]);
	}
	else{
		//printf("Hello\n");
		int temp = 0;
		if(ch == '-')
		{
			ch = fgetc(in);
			while(ch !='\n')
			{
				temp = temp * 10 + -1 * (ch - 48);
				ch = fgetc(in);
			}
		}
		else
		{
			//ch = fgetc(in);
			while(ch !='\n')
			{
				temp = temp * 10 + (ch - 48);
				ch = fgetc(in);
			}
		}
		if(temp > th)
		{
			break;		
			//printf("%d \n",temp);
		}
	}
	//fprintf(out,"%d",temp);
	ch = fgetc(in);
}

while(ch!=EOF)
{
	ch = fgetc(in);
	fprintf(out,"%c",ch);
}	

fclose(in);
fclose(out);
}
