#include<stdio.h>



int fact(int a,int m,int n)
{
	if(m==n)
		return a*m;
	else
		return fact(a*m,m+1,n);
}

int fact2(int n)
{
	return fact(1,1,n);
}

int sqr(int x) { return x * x; }

int id(int x){return x;}

int prod(int m, int n, int (*fptr)(int x))
{
	if (m == n) return fptr(m);
	else return fptr(m) * prod(m+1,n,fptr);
}

int down(int a, int b,int c,int d)
{
	if(a<1)
		return d;
	if(c<=a)
		return down(a-c,b/2,c/2,d+b);
	else
		return down(a,b/2,c/2,d);
}

int up(int a,int b,int c)
{
	if(c<a)
		return up(a,2*b,2*c);
	else
		return down(a,b,c,0);
}

int emult(int a,int b)
{
	return up(a,b,1);
}
void main()
{
	printf("Enter the number\n");
	int n;
	scanf("%d",&n);
	int a=fact2(n);
	printf("%d\n",a);
	printf("prod(1,5,&id) is %d\n",prod(1,5,id));
	printf("prod(1,5,&sqr) is %d\n",prod(1,5,sqr));
	int c=emult(8,7);
	printf("Egyptian Multiplication is: %d\n",c);
}
