//read from file using recursion

#include <stdio.h>
#include <stdlib.h>

int main()
{

	FILE *recur;
	recur = fopen ("test.dat","r");
	int *data = malloc (sizeof(int) * 5);
	scan(recur, data);

}

void scan(FILE *recur, int (&data))
{
	int data;
	if (feof(recur))
		return;
	else
	{
		fscanf(recur, "%d", &data);
		scan(recur, &(data+1));
	}
}
