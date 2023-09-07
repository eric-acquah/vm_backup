#include <stdio.h>
#include <stdlib.h>

/**
 *main - introduction to malloc
 *
 *Return: 0 (Success)
 */

void generate_nums(int n);

int main(void)
{
	int n;

	printf("Enter the number of elements you would like to see :-)\n");
	scanf("%d", &n);

	generate_nums(n);
	return (0);
}

void generate_nums(int n)
{
	int *nums;
	int i;

	nums = (int *)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
	{
		nums[i] = i + 1;

		printf("%d ", nums[i]);
	}
	printf("\n");

	free(nums);
}
