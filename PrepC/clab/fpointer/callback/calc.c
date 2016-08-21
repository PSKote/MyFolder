#include <stdio.h>
#include <math.h>
#include <stdlib.h>

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

float divn(float x, float y)
{
	return x/y;
}


int main(int argc, char *argv[])
{

	int inp1[32] = {0}, inp2[32] = {0}, out[32] = {0};
	int newVal1 = 0, newVal2 = 0, finalAns = 0;

	int val1 = atoi(argv[1]);
	int val2 = atoi(argv[3]);

	float ans = 0;

	int i = 268435456;;

	int j=28;
	while(i)
	{
		if (i&val1)
			inp1[j] = 1;
		else 
			inp1[j] = 0; 
		i/=2;
		j--;
	}


	i = 268435456;

	j=28;
	while(i)
	{
		if (i&val2)
			inp2[j] = 1;
		else 
			inp2[j] = 0; 
		i/=2;
		j--;
	}

	if((inp2[0]!=inp1[0]) || (inp2[1]!=inp1[1]))
	{
		printf("Incorrect input\n");
		exit(0);
	}

	for (j=2; j<30; j++)
	{
		newVal1 = newVal1 + (inp1[j] * pow(2,(j-2)));
	}


	for (j=2; j<30; j++)
	{
		newVal2 = newVal2 + (inp2[j] * pow(2,(j-2)));;
	}

	float updateVal1 = (float) newVal1;
	float updateVal2 = (float) newVal2;

	float (*fptr)(float x, float y);

	if (*argv[2] == '+')
	{
		fptr = &add;
		ans = fptr(updateVal1, updateVal2);
	}
	else if (*argv[2] == '-')
	{
		fptr = &sub;
		ans = fptr(updateVal1, updateVal2);
	}
	else if (*argv[2] == '/')
	{
		fptr = &divn;
		ans = fptr(updateVal1, updateVal2);
	}
	else if (*argv[2] == '*') 
	{
		fptr = &mul;
		ans = fptr(updateVal1, updateVal2);
	}
	else 
		printf("Wrong Input\n");
	

	finalAns = (int) ans;
	//printf("Answer %d\n", finalAns);

	i = 268435456;

	j=30;
	while(i)
	{
		if (i&finalAns)
			out[j] = 1;
		else 
			out[j] = 0; 
		i/=2;
		j--;
	}

	out[0] = inp1[0];
	out[1] = inp1[1];
	out[30] = inp1[30];
	out[31] = inp1[31];

	//for (j=0; j<32; j++)
		//printf("out[%d] = %d\n",j, out[j]);

 	int finalOut = 0;
	for (j=0; j<32; j++)
		finalOut = finalOut + (out[j] * pow(2,j));;

	printf("The answer is %d\n", finalOut);	

}
