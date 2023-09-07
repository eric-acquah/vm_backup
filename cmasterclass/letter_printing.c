#include <stdio.h>

/**
 *main - test code
 *
 *Return: 0 (Success)
 */

void letter_printing(char c);
int _isupper(char c);
int _isalpha(int a);

int main(void)
{
	char c;
	int run = 1;
	char *msg = "Input any letter of your choice: ";
	char *err_msg = "\nSorry, letters only..\n Try again: ";

	printf("%s", msg);

	while (run)
	{
		c = getchar();
		if (c == '\n')
			continue;
		if (c == EOF)
		{
			putchar('\n');
			return (0);
		}
		if (_isalpha(c))
		{
			letter_printing(c);
			run = 0;
		}
		else
		{
			printf("%s", err_msg);
			if (c == EOF)
			{
				putchar('\n');
				return (0);
			}
		}
	}
	return (0);
}

void letter_printing(char c)
{
	int i;
	char ch[] = {'a', 'z'};

	if (_isupper(c))
	{
		ch[0] -= 32;
		ch[1] -= 32;
	}

	for (i = ch[0]; i <= ch[1]; i++)
	{
		printf("%c", i);
		if (i == c)
			break;
	}
	putchar('\n');
}

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int _isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	return (0);
}
