#include <stdio.h>
#include <math.h>
#include "speak.h"

int main()
{

	FILE *positn;
	positn = fopen ("image.dat", "r");

	float angle;
	float x, y;

	while (!feof(positn))
	{	
		fscanf(positn, "%f", &x);
		fscanf(positn, "%f", &y);
		angle = atan2(y,x) * (180.0/3.14159265);
		
		/*printf("%f\n", x);
		printf("%f\n", y);
		printf("%f\n", angle);*/
		
		if(((angle > 180) && (angle < 270)) || ((angle > 0) && (angle < 90)))
		{
			speak("right.txt");
			printf("right\n");
		}
		else if(((angle > 270) && (angle < 360)) || ((angle > 90) && (angle < 180)))
		{
			speak("left.txt");
			printf("left\n");
		}
		else if(angle == 90)
		{
			speak("straight.txt");
			printf("straight\n");
		}
		fgetc(positn);

		
	}

}
