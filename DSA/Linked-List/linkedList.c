/*linked list code to: 1. Insert, 2. Display, 3. Delete, 4. Reverse, 5. Exit */

#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
	} *head;

void addhead(int num)
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = num;
	if (head == NULL)
	{
		head=temp;
		head->next = NULL;
	}
	else
	{
		temp->next = head;
		head=temp;
	}
}

void addafter(int num, int loc)
{
	
}

void append(int num)
{

}

void insert (int num)
{
	int c=0;
	struct node *temp;
	temp = head;
	if (temp == NULL)
	{
		addhead(num);
	}
	else
	{
		while(temp!=NULL)
		{
			if((temp->data) < num)
				c++;
			temp = temp->next;
		}
		if (c==0)
			addhead(num);
		else if(c < count())
			addafter(num, c++);
		else
			append(num);
	}
}



int main()
{
	struct node *n;
	int opt, num;
	head = NULL;
	
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
			printf("Enter the number to be inserted:");
			scanf("%d", &num);
			insert(num);
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
