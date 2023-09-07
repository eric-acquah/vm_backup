#include <stdio.h>

int sum(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}



int show( int (*fun_point)(int, int) )
{
	int equals;

	equals = fun_point(10, 2); /*CALL-BACK*/

	return (equals);
}


int main(void)
{
	int result;

	result = show(sum);
	printf("The value of 10 + 2 is: %d\n", result);

	result = show(sub);
	printf("The value of 10 - 2 is: %d\n", result);

	return (0);
}
