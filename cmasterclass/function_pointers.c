#include <stdio.h>

/**
 *main - a sample code of how function pointer works
 *
 *Return: 0 (Success)
 */

int show(int (*fun_pointer)(int, int));

int sum(int a, int b);

int sub(int a, int b);

int main(void)
{
	int result;

	result = show(sum);
	printf("Result after call to sum: 10 + 2 = %d\n", result);

	result = show(sub);
	printf("Result after call to sub: 10 - 2 = %d\n", result);
	return (0);
}

int show(int (*fun_pointer)(int, int))
{
	int equals;

	equals = fun_pointer(10, 2);

	return (equals);
}

int sum(int a, int b){return (a + b);}

int sub(int a, int b){return (a - b);}
