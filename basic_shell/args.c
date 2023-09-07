#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>

/**
 *main - print all arguments
 *@ac: argument count
 *@av: argument vector
 *Return: (0)
 */
int _strlen(char *str);

int str_cmp(char *str1, char *str2);

int main(int ac, char *av[])
{
	size_t bytes, len = 0, failed = -1;
	int  wbytes, i, size;
	char *space;
	char msg[] = "Chioma-Eric-Shell_$ ";

	(void)ac;

	while (1)
	{
		i = 0;
		while (i < ac)
		{
			len += _strlen(av[i]);
			i++;
		}

		space = (char *)malloc(sizeof(char) * len);
		if (space == NULL)
			exit(97);
		size = _strlen(msg);

		wbytes = write(1, msg, size);
		if (wbytes == -1)
			exit(99);

		bytes = read(STDIN_FILENO, space, len);
		if (bytes == failed)
			exit(98);

		if ((str_cmp(space, "exit()")) == 0)
			exit(0);

		wbytes = write(1, space, bytes);
		if (wbytes == -1)
			exit(99);
	}

	return (0);
}

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0';)
		i++;
	return (i);
}

int str_cmp(char *str1, char *str2)
{
	int i;

	for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
	{
		if (str1[i] > str2[i])
			return (1);
		else if (str1[i] < str2[i])
			return (-1);
	}
	return (0);
}
