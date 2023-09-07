#include <stdio.h>
#include <stdlib.h>

/**
 *main - test code
 *
 *Return: 0 (Success)
 */

typedef struct node
{
	int data;
	struct node *link;
}node_t;

void create_list(void);

int main(void)
{
	create_list();
	return (0);
}


void create_list(void)
{
	int i;
	int count = 0;
	node_t *head, *nxt, *tmp;
	head = 0;/*This is the head pointer to the list of nodes*/

	for (i = 0; i < 3; i++)
	{/*nxt will create a new node per each iteration*/
		nxt = (node_t *)malloc(sizeof(node_t));

		if (head == 0)/*Create the first link*/
		{
			tmp = nxt;
			head = tmp;/*head now points the very first node created*/
			tmp->data = 0;
			tmp->link = 0;
			/*(head->next|0|NULL|)*/
		}
		else
		{/*Append the next node to the previous one if previous node exist*/
			tmp->link = nxt;/*this is a newer 'nxt' being assigned to the previous node*/
			tmp->link->data = 0 + i;/*this is just an update to the previous data*/
			tmp->link->link = 0;/*Ending the current list*/
			tmp = nxt;/*tmp is now pointing to the current node created*/

			/*(head->next->next->|0 + i|NULL|)*/
		}
	}

	while (head != 0)
	{
		printf("Node[%d] = %d\n", count, head->data);
		head = head->link;
		count++;
	}

}
