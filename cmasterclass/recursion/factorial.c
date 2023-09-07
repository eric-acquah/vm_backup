#include <stdio.h>

/**
 *main - print the factorial of a number
 *Return: 0 (Success)
 */

int _factorial(int);

int main(void)
{
	int print;
	int n;

	printf("**Factorial**\n");
	printf("Enter the factorial of a number: ");
	scanf("%d", &n);

	print = _factorial(n);
	printf("The factorial of %d is: %d\n", n, print);
	return (0);
}


/**
 *factorial - return the factorial of a number using the iterative method
 *@n: factorial argument
 *Return: the factorial of a number
 */

int factorial(int n)
{
	int i;
	int result = 1;

	for (i = 1; i <= n; i++)
	{
		result = result * i;
	}
	return (result);
}

/**
 *_factorial - return the factorial of a number using the recursive method
 *@n: factorial argument
 *Return: the factorial of a number
 */

int _factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	return (n * _factorial(n - 1));
}
