#include "ss_header.h"

int top = -1;

/**
 *push - add a new item to stack
 *value - item to be added
 */
void push(int value)
{
	if (is_full())
	{
		printf("Stack Overflow!\n");
		return;
	}

	top++;
	stack[top] = value;
}

/**
 *pop - remove item from stack
 *Return: the item removed
 */
int pop(void)
{
	int item;

	if (is_empty())
	{
		printf("Stack is empty!\n");
		return (-1);
	}

	item = stack[top];
	top--;
	return (item);
}

/**
 *is_empty - check is stack is empty
 *Return: 1 if true else false
 */
int is_empty(void)
{
	if (top == -1)
		return (1);
	return (0);
}

/**
 *is_full - check if stack is full
 *Return: 1 if true 0 otherwise
 */
int is_full(void)
{
	if (top == (MAX - 1))
		return (1);
	return (0);
}

/**
 *display - show the elements currently in the stack
 */
void display(void)
{
	int i;

	if (top != -1)
	{
		for (i = 0; i <= top; i++)
		{
			printf("|%d|", stack[i]);
		}
		putchar('\n');
	}
	else
	{
		printf("Nothing to show in stack at the moment\n");
		return;
	}
}
