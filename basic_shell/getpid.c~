#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

/**
 *main - print the proccess id
 *
 *Retuirn: 0
 */

int main(void)
{
	pid_t id, pid;

	id = getpid();
	pid = getppid();

	printf("\nParent process [%u]\n", pid);
	printf("\nChild process [%u]\n", id);
	return (0);
}
