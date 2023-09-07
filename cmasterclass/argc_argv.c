#include <stdio.h>


/**
 *main - process command line arguments
 *@argc: number of arguments passed
 *@argv: pointer to arg strings
 *Return 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
