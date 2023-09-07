#include <stdio.h>

/**
 *main - evaluate face values
 *
 *Return: 0 (success)
 */
int _atoi(char *);

int main(void)
{
	char card_name[3];
	int val = 0;
	int counter = 0;

	while (val != 'X')
	{
	printf("Enter the card_name: ");
	scanf("%2s", card_name);

	switch (card_name[0])
	{
	case 'Q':
	case 'K':
	case 'J':
		val = 10;
		break;
	case 'A':
		val = 11;
		break;
	case 'X':
		printf("You entered an invalid value\n");
		return 0;
	default:
		val = _atoi(card_name);
		if (val < 1 || val > 10)
		{
			printf("The value entered is not in the range of 1-10.\n");
			printf("Try again\n");
			continue;
		}
	}
	if (val >= 3 && val <= 6)
	{
		counter++;
	}
	else if (val == 10)
	{
		counter--;
	}
	printf("Current count is: %d\n", counter);
	}
	return (0);
}

/**
 *_atoi - convert string to integer
 *@x: array pointer
 *Return: ele
 */

int _atoi(char *x)
{
	char *c = x;
	int i = 0;
	/*int n = 0;*/
	int sign = 1;
	/*int j;*/
	int ele = 0;

	/*for (j = 0; c[j] != '\0'; j++)
	{
		n++;
		}*/

	while (c[i] != '\0')
	{

		if (c[0] == ' ')
		{
			continue;
		}
		if (c[i] == '-')
		{
			sign = -1;
		}

		if (c[i] >= '0' && c[i] <= '9')
		{
		c[i] = (c[i] - '0');
		ele = (ele * 10 + c[i]);
		}
		i++;
	}
	return (sign * ele);
}
