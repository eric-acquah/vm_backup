#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <limits.h>
#include <errno.h>

#define MAX_TOKENS 1024
#define MAX_LINE 124

/**
 *main - test shell componets
 *
 *Return 0 (Success)
 */

char *linetxt_reader(FILE *fd, size_t buf_siz);

int executioner(char **token, char *env[]);

void free_grid(char **ptr, size_t blocks);

int main(int ac, char *av[], char *env[])
{
	int i;
	size_t input_byts, j;
	char **tokens;
	char *token;
	char *read_buff;
	char *msg = "EC_SH($) ";

	(void)env;
	(void)av;
	(void)ac;
	(void)j;
	(void)input_byts;

	input_byts = (size_t)ac;

	/*Promting user*/
	write(STDOUT_FILENO, msg, 10);
	read_buff = linetxt_reader(stdin, input_byts);

	/*Tokenization*/
	tokens = (char **)malloc(sizeof(char *) * strlen(read_buff));
	if (tokens == NULL)
	{
		free(read_buff);
		return (1);
	}
	for (j = 0; j < input_byts; j++)
	{
		tokens[j] = (char *)malloc(sizeof(char) * 100);
		if (tokens[j] == NULL)
		{
			while (j > 0)
			{
				free(tokens[j--]);
			}
			free(tokens);
			free(read_buff);
			exit(1);
		}
	}

	token = strtok(read_buff, " \n");
	i = 0;
	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, " \n");
		if (tokens[i] == NULL)
		{
			perror("Failed to tokenize string..");
			free(read_buff);
			free_grid(tokens, 100);
			exit(2);
		}
		i++;
	}
	tokens[i] = NULL;
	printf("Token :[%s]", tokens[0]);

	executioner(tokens, env);

	free(read_buff);
	free(tokens);
	return (0);
}

char *linetxt_reader(FILE *fd, size_t buf_siz)
{
	int actual_size;
	char *txt_buff;
	/* char *txt_buf; */

	actual_size = getline(&txt_buff, &buf_siz, fd);
	if (actual_size == -1)
		perror("There was a problem reading line text");

	/* txt_buf = realloc(txt_buff, (actual_size + 1)); */

	return (txt_buff);
}

int executioner(char **tokens, char *env[])
{
	int status;
	pid_t cid;
	char cwd[PATH_MAX];
	getcwd(cwd, sizeof(cwd));
	printf("Current working directory: %s\n", cwd);

        /* printf("Tokens: %s\n", tokens[0]); */

	cid = fork();
	(void)env;

	if (cid == -1)
	{
		perror("Something went wrong...Try again later");
		return (1);
	}

	if (cid == 0)
	{
		status = execve(tokens[0], tokens, env);
		if (status == -1)
		{
			printf("execve failed. Error: %s\n", strerror(errno));
			exit(1);
		}
	}
	else
	{
		wait(&status);
		free_grid(tokens, 100);
		return (1);
	}

	return (0);
}

void free_grid(char **ptr, size_t blocks)
{
	size_t i;

	for (i = 0; i < blocks; i++)
	{
		free(ptr[i]);
	}
	free(ptr);
}
