#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * infinite_while - run an infinite while loop
 * Return: Always 0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - createss five zombie processes
 * Return: Always 0
 */

int main(void)
{
	int j;
	int pid = 0;

	for (j = 0; j < 5; j++)
	{
		pid = fork();
		if (pid < 0)
			continue;
		else if (pid == 0)
			exit(0);
		else
			printf("Zombie process created, PID: %d\n", pid);
	}

	infinite_while();
	return (0);
}
