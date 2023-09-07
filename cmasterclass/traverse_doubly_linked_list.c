#include "head.h"

/**
 *main - Trying out doubly linked list operations and algorithem
 *
 *Return: 0 (Success)
 */


int main(void)
{
	link_t *show, *clear;

	show = creator(5);
	clear = display(show);
	free_list(clear);
	return (0);
}
