#include <stdio.h>

/**
 *main - print a reversed version of a stirng
 *Return: 0 (Success)
 */
void string_rev(char *);

int main(void)
{
        int i,e;
	int count = 0;
	char arr[20];
	char temp;

	printf("Enter a phrase here: \n");
	scanf("%[^\n]", arr);

	for (e = 0; *(arr + e) != '\0'; e++)
	{
		count++;
	}

	for (i = 0; i <= count - 1; i++)
	{
		temp = arr[0];
		arr[0] = arr[i + 1];
		arr[i + 1] = temp;

		printf("%c", arr[i]);
	}
	printf("\n");

	/* string_rev(arr); */

	return (0);
}

void string_rev(char input[])
{
	int i,j;
	int count = 0;
	char *arr = input;

	for (i = 0; *(arr + i) != '\0'; i++)
	{
		count++;
	}

	for (j = count - 1; j >= 0; j--)
	{
		printf("%c", *(arr + j));
	}
	printf("\n");
}
