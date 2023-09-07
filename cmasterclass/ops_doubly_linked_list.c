#include "head.h"

/**
 *main - insertion & deletion operations performed on doubly linked list
 *
 *Return: 0 (Success)
 */

int main(void)
{
	link_t *show, *show_after, *clear;

	/*create and display a list*/
	printf("***************** Insert at beginning*****************\n");
	printf("State of list before change>>>>>>>>>>>>>>\n");
	show = creator(3);
	display(show);
	printf("____________________________________________________\n");

	/* Insert a new node at the beginning, then display the change */
	printf("State of list after change>>>>>>>>>>>>>>\n");
	show_after = insert_at_beginning(show);
	clear = display(show_after);
	printf("______________________________________________________\n");

	free_list(clear);

	/*printf("***************** Insert at end*****************\n");
        create and display a list
	printf("State of list before change>>>>>>>>>>>>>>\n");
	show = creator(3);
	display(show);
	printf("____________________________________________________\n");

	Insert a new node at the beginning, then display the change
	printf("State of list after change>>>>>>>>>>>>>>\n");
	show_after = insert_at_end(show);
	clear = display(show_after);
	printf("______________________________________________________\n");

	free_list(clear);*/
	return (0);
}


/**
 *insert_at_begining - insert a new node at the beginning of a list
 *@head: pointer to the head node
 *Return: a pointer to the altered list
 */

link_t *insert_at_beginning(link_t *head)
{
	link_t *new_node, *tail = NULL;

	if (head == NULL)
		return (NULL);

        tail = head->next;

	new_node = make_node();
	new_node->data = head->data / 2;
	head = new_node;
	new_node->next = tail;
	new_node->prev = NULL;
	tail->prev = new_node;

	return (head);
}


/**
 *insert_at_end - insert a new node at the end of a doubly linked list
 *
 *Return: a pointer to the altered list
 */

link_t *insert_at_end(link_t *head)
{
	link_t *last_node, *tmp, *tail = NULL;

	if (head == NULL)
		return (NULL);

	tail = head->next;
	tmp = tail;

	last_node = make_node();
	last_node->data = tail->data % 10;

	while (tmp != NULL)
	{
		tail = tmp;
		tmp = tmp->next;
	}

	tail->next = last_node;
	last_node->prev = tail;
	last_node->next = NULL;

	return (head);
}
