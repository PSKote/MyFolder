#include <stdio.h>
//#include "dbase.h"

int main(int argc, char *argv[])
{

	FILE *data;
	int choice;
	//printf("Welcome to the C Movie Database!\n");
	while(1)
	{
		data = fopen (argv[1], "r+w");	
		choice = SelectOption();
		switch (choice)
		{
			case 1: DisplayAllMovie(data);
				break;
			case 2: DisplayShortMovie(data);
				break;
			case 3: DisplayLongMovie(data);
				break;
			case 4: DisplayOlderMovie(data);
				break;
			case 5: DisplayNewMovie(data);
				break;
			case 6: DisplayRegionMovie(data);
				break;
			case 7: DisplayAddMovie(data);
				break;
			case 0: quit(data);
				break;
		}
	}
	return 1;
	fclose(data);
}