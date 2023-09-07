#include <stdio.h>

/**
-function declearation

-function definition

-function call

*/

int multiply(int , int);

int sum(int , int);

int main(void)
{
	int num1;
	int num2;

	int num3 = 4;
	int num4 = 3;

	int show;
	int view;

	num1 = 2;
	num2 = 4;

	show = multiply(num1,num2);
	printf("the result is: %d\n", show);

	printf("___________________________\n");

	view = sum(num3,num4);
	printf("the result is: %d\n", view);
	return(0);
}

/*Function Prototype*/
int multiply(int x, int y)
{
	/*Function body*/
	int result;

	result = x * y;
	return (result);
}

int sum(int x, int y)
{
	/*Function body*/
	int result;

	result = x + y;
	return (result);
}
