#include <stdio.h>
#include "node.h"

int main()
{

	node *new;
	printf("Parent Node\n");
	new = newIntegerNode(12);
	display(new);
	new = newRealNode(12.5);
	display(new);
	new = newStringNode("Hello");
	display(new);
	printf("Child Node\n");
	new->child = newIntegerNode(13);
	display(new->child);
	new->child = newRealNode(13.5);
	display(new->child);
	new->child = newStringNode("World");
	display(new->child);
	printf("Next Node\n");
	new->next = newIntegerNode(14);
	display(new->next);
	new->next = newRealNode(14.5);
	display(new->next);
	new->next = newStringNode("Prajwal");
	display(new->next);
	printf("Linked List\n");
	new->next->child = newIntegerNode(15);
	display(new->next->child);
	new->next->child = newRealNode(15.5);
	display(new->next->child);	
	new->next->child = newStringNode("Sharma");
	display(new->next->child);
	deleteNode(new);

}