#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infinite_while - Create an infinite to run the program
 * Return: 0 (always)
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
 * main - creates 5 processes as a zombie
 * Return: 0 (always)
 */
int main(void)
{
	unsigned int index;
	pid_t zombie;

	for (index = 0; index < 5; index++)
	{
		zombie = fork();
		if (zombie < 0)
			perror("fork error");
		else if (zombie == 0)
			exit(0);
		printf("Zombie process created, PID: %d\n", zombie);
	}

	infinite_while();
	return (0);
}
