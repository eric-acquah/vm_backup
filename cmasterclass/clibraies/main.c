#include <stdio.h>
#include "head.h"
int main(void)
{
	int op_num, result, a, b;

	printf("*********Simply_Cal**************\n");
	printf("Enter one desired operation:\n");
	printf("\n1: add\n2: subtract\n3: divide\n4: modulus\n");
	printf(">>>> ");
	scanf("%d", &op_num);

	printf("\nEnter two numbers you want to calculate\n");
	printf("1st>>>> ");
	scanf("%d", &a);
	printf("2nd>>>> ");
	scanf("%d", &b);

	switch (op_num)
	{
	case 1:
		result = add(a, b);
		break;
        case 2:
		result = sub(a, b);
		break;
	case 3:
		result = div(a, b);
		break;
	case 4:
		result = mod(a, b);
		break;
	default:
		printf("Invalid option...\n");
	}

	printf("\nResult>>>>>>> %d\n", result);
	return (0);
}
