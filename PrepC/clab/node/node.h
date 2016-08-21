typedef struct nodeobject
{
char *type;
int ival;
double rval;/* the value part of the node */
char *sval;
struct nodeobject *child;
struct nodeobject *next;
} node;
extern char *INTEGER;
extern char *REAL;
extern char *STRING;
extern node *newIntegerNode(int value);
extern node *newRealNode(double value);
extern node *newStringNode(char *value);
extern node *deleteNode(node *value);
extern node *display(node *value);
