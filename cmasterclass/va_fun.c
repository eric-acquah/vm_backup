#include <stdio.h>
#include <stdarg.h>

/**
 *main - display the sum of values
 *
 *Return: 0 (EXIT_STATUS)
 */

int sum(int count, ...);

int main(void)
{
	int display;

	display = sum(6, -1, 5, 2, 3, -5, 9); /*19*/

	printf("The result of adding the numbers is: %d\n", display);
	return (0);
}


int sum(int count, ...)
{
	va_list add;
	int result = 0;
	int i;

	va_start(add, count);

	for (i = 0; i < count; i++)
	{
	      result += va_arg(add, int);
	}

	va_end(add);

	return (result);
}
