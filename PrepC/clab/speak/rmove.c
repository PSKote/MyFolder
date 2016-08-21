#include <stdio.h>
#include <math.h>
#include "speak.h"

int main(int argc, char *argv[])
{

	FILE *data;
	data = fopen("move.dat", "w");	
	
	double x = atoi (argv[1]);
	double y = atoi (argv[2]);

	//printf("%f\n", x);
	//printf("%f\n", y);
	
	float valx1 = (float) x;
	float valy1 = (float) y;

	float dist1;
	float dist2;

	float valx2;
	float valy2;
	float angle;

if ((valx1 >= 0) && (valy1) >= 0)
{
	while(1)
	{		

		fprintf(data, "%f", valx1);
		fprintf(data, "%c", ' ');
		fprintf(data, "%f", valy1);
		fprintf(data, "%s", "\n");

		angle = atan2(valy1,valx1) * (180.0/3.14159265);
		if(((angle > 180) && (angle < 270)) || ((angle > 0) && (angle < 90)))
		{
			speak("right.txt");
			//printf("right\n");
		}
		else if(((angle > 270) && (angle < 360)) || ((angle > 90) && (angle < 180)))
		{
			speak("left.txt");
			//printf("left\n");
		}
		else if(angle == 90)
		{
			speak("straight.txt");
			//printf("straight\n");
		}

		dist1 = sqrt((pow(valx1,2)) + (pow(valy1,2)));

		//printf("x1=%f y1=%f\n", valx1, valy1);
		//printf("dist1=%f\n", dist1);
	
		valx2 = valx1 - 10;

		fprintf(data, "%f", valx2);
		fprintf(data, "%c", ' ');
		fprintf(data, "%f", valy1);
		fprintf(data, "%s", "\n");

		angle = atan2(valy1,valx2) * (180.0/3.14159265);
		if(((angle > 180) && (angle < 270)) || ((angle > 0) && (angle < 90)))
		{
			speak("right.txt");
			//printf("right\n");
		}
		else if(((angle > 270) && (angle < 360)) || ((angle > 90) && (angle < 180)))
		{
			speak("left.txt");
			//printf("left\n");
		}
		else if(angle == 90)
		{
			speak("straight.txt");
			//printf("straight\n");
		}


		valy2 = valy1 - 10;


		dist2 = sqrt((pow(valx2,2)) + (pow(valy2,2)));
		
		//printf("x2=%f y2=%f\n", valx2, valy2);
		//printf("dist2=%f\n\n", dist2);

		if (dist2 <= dist1)
		{
			valx1 = valx2;
			valy1 = valy2;
		}	
		else
		{
			break;
		}

	}

	fprintf(data, "%f", valx1);
	fprintf(data, "%c", ' ');
	fprintf(data, "%f", valy1);
	fprintf(data, "%s", "\n");

	if (dist1 == 0)
		printf("Cool! you are at origin.\n");	
	else
		printf("You are only %f distance away from origin.\n", dist1);	
}

else if((valx1 > 0) && (valy1) < 0)
{
	while(1)
	{		

		fprintf(data, "%f", valx1);
		fprintf(data, "%c", ' ');
		fprintf(data, "%f", valy1);
		fprintf(data, "%s", "\n");

		angle = atan2(valy1,valx1) * (180.0/3.14159265);
		if(((angle > 180) && (angle < 270)) || ((angle > 0) && (angle < 90)))
		{
			speak("right.txt");
			//printf("right\n");
		}
		else if(((angle > 270) && (angle < 360)) || ((angle > 90) && (angle < 180)))
		{
			speak("left.txt");
			//printf("left\n");
		}
		else if(angle == 90)
		{
			speak("straight.txt");
			//printf("straight\n");
		}

		dist1 = sqrt((pow(valx1,2)) + (pow(valy1,2)));

		//printf("x1=%f y1=%f\n", valx1, valy1);
		//printf("dist1=%f\n", dist1);
	
		valx2 = valx1 - 10;

		fprintf(data, "%f", valx2);
		fprintf(data, "%c", ' ');
		fprintf(data, "%f", valy1);
		fprintf(data, "%s", "\n");

		angle = atan2(valy1,valx2) * (180.0/3.14159265);
		if(((angle > 180) && (angle < 270)) || ((angle > 0) && (angle < 90)))
		{
			speak("right.txt");
			//printf("right\n");
		}
		else if(((angle > 270) && (angle < 360)) || ((angle > 90) && (angle < 180)))
		{
			speak("left.txt");
			//printf("left\n");
		}
		else if(angle == 90)
		{
			speak("straight.txt");
			//printf("straight\n");
		}


		valy2 = valy1 + 10;


		dist2 = sqrt((pow(valx2,2)) + (pow(valy2,2)));
		
		//printf("x2=%f y2=%f\n", valx2, valy2);
		//printf("dist2=%f\n\n", dist2);

		if (dist2 <= dist1)
		{
			valx1 = valx2;
			valy1 = valy2;
		}	
		else
		{
			break;
		}

	}

	fprintf(data, "%f", valx1);
	fprintf(data, "%c", ' ');
	fprintf(data, "%f", valy1);
	fprintf(data, "%s", "\n");

	if (dist1 == 0)
		printf("Cool! you are at origin.\n");	
	else
		printf("You are only %f distance away from origin.\n", dist1);	
}

else if((valx1 < 0) && (valy1) > 0)
{
	while(1)
	{		

		fprintf(data, "%f", valx1);
		fprintf(data, "%c", ' ');
		fprintf(data, "%f", valy1);
		fprintf(data, "%s", "\n");

		angle = atan2(valy1,valx1) * (180.0/3.14159265);
		if(((angle > 180) && (angle < 270)) || ((angle > 0) && (angle < 90)))
		{
			speak("right.txt");
			//printf("right\n");
		}
		else if(((angle > 270) && (angle < 360)) || ((angle > 90) && (angle < 180)))
		{
			speak("left.txt");
			//printf("left\n");
		}
		else if(angle == 90)
		{
			speak("straight.txt");
			//printf("straight\n");
		}

		dist1 = sqrt((pow(valx1,2)) + (pow(valy1,2)));

		//printf("x1=%f y1=%f\n", valx1, valy1);
		//printf("dist1=%f\n", dist1);
	
		valx2 = valx1 + 10;

		fprintf(data, "%f", valx2);
		fprintf(data, "%c", ' ');
		fprintf(data, "%f", valy1);
		fprintf(data, "%s", "\n");

		angle = atan2(valy1,valx2) * (180.0/3.14159265);
		if(((angle > 180) && (angle < 270)) || ((angle > 0) && (angle < 90)))
		{
			speak("right.txt");
			//printf("right\n");
		}
		else if(((angle > 270) && (angle < 360)) || ((angle > 90) && (angle < 180)))
		{
			speak("left.txt");
			//printf("left\n");
		}
		else if(angle == 90)
		{
			speak("straight.txt");
			//printf("straight\n");
		}


		valy2 = valy1 - 10;


		dist2 = sqrt((pow(valx2,2)) + (pow(valy2,2)));
		
		//printf("x2=%f y2=%f\n", valx2, valy2);
		//printf("dist2=%f\n\n", dist2);

		if (dist2 <= dist1)
		{
			valx1 = valx2;
			valy1 = valy2;
		}	
		else
		{
			break;
		}

	}

	fprintf(data, "%f", valx1);
	fprintf(data, "%c", ' ');
	fprintf(data, "%f", valy1);
	fprintf(data, "%s", "\n");

	if (dist1 == 0)
		printf("Cool! you are at origin.\n");	
	else
		printf("You are only %f distance away from origin.\n", dist1);	
}


else
{
	while(1)
	{		

		fprintf(data, "%f", valx1);
		fprintf(data, "%c", ' ');
		fprintf(data, "%f", valy1);
		fprintf(data, "%s", "\n");

		angle = atan2(valy1,valx1) * (180.0/3.14159265);
		if(((angle > 180) && (angle < 270)) || ((angle > 0) && (angle < 90)))
		{
			speak("right.txt");
			//printf("right\n");
		}
		else if(((angle > 270) && (angle < 360)) || ((angle > 90) && (angle < 180)))
		{
			speak("left.txt");
			//printf("left\n");
		}
		else if(angle == 90)
		{
			speak("straight.txt");
			//printf("straight\n");
		}

		dist1 = sqrt((pow(valx1,2)) + (pow(valy1,2)));

		//printf("x1=%f y1=%f\n", valx1, valy1);
		//printf("dist1=%f\n", dist1);
	
		valx2 = valx1 + 10;

		fprintf(data, "%f", valx2);
		fprintf(data, "%c", ' ');
		fprintf(data, "%f", valy1);
		fprintf(data, "%s", "\n");

		angle = atan2(valy1,valx2) * (180.0/3.14159265);
		if(((angle > 180) && (angle < 270)) || ((angle > 0) && (angle < 90)))
		{
			speak("right.txt");
			//printf("right\n");
		}
		else if(((angle > 270) && (angle < 360)) || ((angle > 90) && (angle < 180)))
		{
			speak("left.txt");
			//printf("left\n");
		}
		else if(angle == 90)
		{
			speak("straight.txt");
			//printf("straight\n");
		}

		valy2 = valy1 + 10;


		dist2 = sqrt((pow(valx2,2)) + (pow(valy2,2)));
		
		//printf("x2=%f y2=%f\n", valx2, valy2);
		//printf("dist2=%f\n\n", dist2);

		if (dist2 <= dist1)
		{
			valx1 = valx2;
			valy1 = valy2;
		}	
		else
		{
			break;
		}

	}

	fprintf(data, "%f", valx1);
	fprintf(data, "%c", ' ');
	fprintf(data, "%f", valy1);
	fprintf(data, "%s", "\n");

	if (dist1 == 0)
		printf("Cool! you are at origin.\n");	
	else
		printf("You are only %f distance away from origin.\n", dist1);	
}

}
