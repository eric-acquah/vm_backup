#include <stdio.h>
#include <stdlib.h>
/**
 *main - Print int value of character litral
 *
 *Return: 0 (Success)
 */

int main(void)
{
	int c;
	c = 'a';

	for(c = 'a'; c <= 'z'; c++){
	        	printf("The int value of %c is %d\n", c, c);
		}
		return (0);
}
