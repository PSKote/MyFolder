#include <stdio.h>
#include <stdlib.h>
#include "node.h"
static node *newNode(void);
static node *print(node *n);
/*************** public interface *************/
char *INTEGER = "integer";
char *REAL = "real";
char *STRING = "string";
node *
newIntegerNode(int v)
{
node *p = newNode();
p->type = INTEGER;
p->ival = v;
return p;
}
node *
newRealNode(double v)
{
node *p = newNode();
p->type = REAL;
p->rval = v;
return p;
}
node *
newStringNode(char *v)
{
node *p = newNode();
p->type = STRING;
p->sval = v;
return p;
}
node *
deleteNode(node *n)
{
	free(n);
}
node *
display(node *n)
{
	print(n);
}
/*************** private methods *************/
static node *
newNode()
{
node *n = (node *) malloc(sizeof(node));
if (n == 0) { fprintf(stderr,"out of memory"); exit(-1); }
return n;
}
static node *
print(node *n)
{
	printf("%s:", n->type);
	if(n->type == "integer")
		printf("%d\n", n->ival);
	else if(n->type == "real")
		printf("%f\n", n->rval);
	else
		printf("%s\n", n->sval);
}
