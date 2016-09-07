/*Doubly linked list code to: 1. Insert, 2. Display, 3. Delete, 4. Reverse, 5. Exit */

#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next, *prev;
	} *head;



int main()
{
	struct node *n;
	int opt;
	//head = NULL;
	
	while(1)
	{
		printf("1. Insert\n");
		printf("2. Display\n");
		printf("3. Delete\n");
		printf("4. Reverse\n");
		printf("5. Exit\n");
		printf("Enter your choice:");
		scanf("%d", &opt);
		if (opt == 1)
		{
			insert();
			printf("New node/ nodes inserted\n");
		}
		else if (opt == 2)
		{
			printf("Diplaying all nodes\n");
			display();
		}
		else if(opt == 3)
		{
			delete();
			printf("Deleted a node\n");
		}
		else if(opt == 4)
		{
			reverse();
			printf("Linked List Reversed\n");
		}
		else if(opt == 5)
		{
			exit(0);
		}
		else
			printf("Invlaid option\n");
			
	}

	return 0;
}
