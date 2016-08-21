//Read the file where image is given and print it

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	FILE *img;
	img = fopen (argv[1], "r");
	int row=0, col=0, i=0, j=0;
	fscanf(img, "%d", &row);
	fscanf(img, "%d", &col);
	//printf("dBug testing row: %d\n",row);
	//printf("dBug testing col: %d\n",col);

	char **data = (char**)malloc (sizeof(char *) * row);
	for (i=0; i<row; i++)
		data[i] = (char*)malloc (sizeof(char) * col);



	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			data[i][j]=0;
	while(!feof(img))
	{	
		fscanf(img, "%d", &i);
		fscanf(img, "%d", &j);
		fscanf(img, "%c", &data[i][j]);
		fscanf(img, "%c", &data[i][j]);
		//data[i][j] = fgetc(img);
		//data[i][j] = fgetc(img);
//		printf("dBug: testing row:%d, col: %d, element: %c\n", i,j,data[i][j]);
	}
	
	for (i=0; i<row; i++)
	{
		for (j=0; j<col; j++)
		{
				if(data[i][j] == '@')
				printf("%c", ' ');
			else
				printf("%c", data[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<row; i++)
		free(data[i]);
	free(data);

fclose(img);

}
