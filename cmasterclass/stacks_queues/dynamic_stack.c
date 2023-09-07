#include "dyheader.h"

/**
 *main - implementation of dynamic stack abstruct data structure
 *
 *Return: 0 (Success)
 */

int main(void)
{
	return (0);
}

link_t *top = NULL;

void push(int value)
{
	link_t *tmp = NULL;

	if (is_empty())
	{
		makenode(value);
	}
	else
	{
		tmp = makenode(value);
		tmp->next = top;
		top = tmp;
	}
}

int pop(void)
{
	int item;
	link_t *clr;

	if (is_empty())
	{
		printf("Stack is empty!\n");
		return (-1);
	}
	else if (top->next == NULL)
	{
		item = top->data;
		free(top);
		return (item);
	}

	item = top->data;
	clr = top;
	top = top->next;
	free(clr);

	return (item);
}

int is_empty(void)
{
	if (top = NULL)
		return (1);
	return (0);
}

link_t makenode(int data)
{
	link_t *fresh_node = (link_t *)malloc(sizeof(link_t));
	if (fresh_node == NULL)
	{
		printf("Stack Overflow!");
		return (NULL);
	}
	fresh_node->data = data;
	fresh_node->next = NULL;

	return (fresh_node);
}

void display(void)
{
	link_t *tmp = top;

	if (top != NULL)
	{
		while (tmp != NULL)
		{
			printf("|%d|", tmp->data);
			tmp = tmp->next;
		}
		putchar('\n');
	}
	else
	{
		printf("Nothing in stack to show at the moment..\n");
	}
}
