#include <stdio.h>

/**
 *main - test code
 *
 *Return: 0 (Success)
 */


void print_alpha(void);

int main(void)
{
	print_alpha();
	return (0);
}

void print_alpha(void)
{
	char start;
	char end = 'Z';

	for (start = 'A'; start <= end; start++)
	{
		printf("%c", start);
	}
	putchar('\n');
}
