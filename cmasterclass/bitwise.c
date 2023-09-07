#include <stdio.h>

/**
 *main - test code
 *
 *Return: 0 (Success)
 */

int main (void)
{
	int i, j = 20, k;

	i = 2;
	k = j << i;
	printf("<< %d\n", k);
	k = j >> i;
	printf("%d >>\n", k);
	k = (j += 1) >> i;
	printf("%d >>\n", k);
	k = (j += 2) >> i;
	printf("%d >>\n", k);
	k = (j += 3) >> i;
	printf("%d >>\n", k);
	k = (j += 4) >> i;
	printf("%d >>\n", k);
	k = (j += 5) >> i;
	printf("%d >>\n", k);
	return (0);
}
