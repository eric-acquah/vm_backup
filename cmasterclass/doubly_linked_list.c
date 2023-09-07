#include "head.h"

/**
 *creator - create a new doubly linked list
 *@num_of_list - number of list to be created
 *Return: a pointer to the newly creater list
 */

link_t *creator(int num_of_list)
{
	link_t *head =  NULL;
	link_t *tmp, *tail = NULL;
	link_t *new_node;
	int i;

	if (num_of_list < 1)
		return (NULL);

	for (i = 0; i < num_of_list; i++)
	{
		if (head == NULL)
		{
			head = make_node();
			head->data = 17;
			head->next = NULL;
			head->prev = NULL;
			tmp = head;
		}
		else
		{
			new_node = make_node();
			tail = new_node;
			new_node->data = tmp->data * 2;
			new_node->next = NULL;
			new_node->prev = tmp;
			tmp->next = new_node;
			tmp = new_node;
		}
	}

	while (tail != NULL)
	{
		printf("tial_node %d: [%d] @ (%p)\n", i, tail->data, (void*)&tail->data);
		tail = tail->prev;
		i--;
	}

	return(head);
}

/**
 *make_node - create a new node
 *
 *Return: a pointer to a newly created node
 */

link_t *make_node(void)
{
	link_t *fresh_node = (link_t *)malloc(sizeof(link_t));
	if (fresh_node == NULL)
		return (NULL);
	return (fresh_node);
}

link_t *display(link_t * head)
{
	link_t *tmp = head;
	int i = 0;

	if (head == NULL)
	{
		printf("Couldn't display :(\n");
		return (NULL);
	}

	while (tmp != NULL)
	{
		printf("Node %d = [%d] @ {%p}\n", i, tmp->data, (void *)&tmp->data);
		tmp = tmp->next;
		i++;
	}
	return (head);
}



/**
 *free_list - free a linked list
 *
 *@head: a pointer to the head node of a list
 */


void free_list(link_t *head)
{
	link_t *tmpp, *tmp = head;

	if (head == NULL)
	{
		printf("Nothing happened :(\n");
		return;
	}

	while (tmp != NULL)
	{
		tmpp = tmp->next;
		free(tmp);
		tmp = tmpp;
	}
}
