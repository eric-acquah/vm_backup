#include "ss_header.h"

/**
 *main - implementation of stack abstract data structure using array
 *
 *Return: 0 (Success)
 */

int main(void)
{
	push(10);
	display();
	push(20);
	push(30);
	push(40);
	display();
	pop();
	display();
	pop();
	pop();
	pop();
	display();
	pop();
	return (0);
}
