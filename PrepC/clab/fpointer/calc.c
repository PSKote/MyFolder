#include <stdio.h>

float add(float x, float y)
{
	return x+y;
}

float sub(float x, float y)
{
	return x-y;
}

float mul(float x, float y)
{
	return x*y;
}

float div(float x, float y)
{
	return x/y;
}

int main(int argc, char *argv[])
{

	float val1 = (float) atoi(argv[1]);
	float val2 = (float) atoi(argv[3]);

	float (*fptr)(float x, float y);

	if (*argv[2] == '+')
	{
		fptr = &add;
		printf("The ansrwer is %f\n",fptr(val1, val2));
	}
	else if (*argv[2] == '-')
	{
		fptr = &sub;
		printf("The ansrwer is %f\n",fptr(val1, val2));
	}
	else if (*argv[2] == '/')
	{
		fptr = &div;
		printf("The ansrwer is %f\n",fptr(val1, val2));
	}
	else if (*argv[2] == '*') 
	{
		fptr = &mul;
		printf("The ansrwer is %f\n",fptr(val1, val2));
	}
	else 
		printf("Wrong Input\n");


}
