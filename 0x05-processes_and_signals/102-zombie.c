#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

/**
 * infinite_while - Run an infinite loop with a 1-second sleep in each iteration.
 *
 * This function is typically used to create a long-running process.
 *
 * Return: 0 (This function does not return as it runs infinitely.)
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
 * main - Entry point of the program
 *
 * Description: Creates 5 child processes using fork(),
 * prints their PIDs with a message, and causes them to
 * become zombie processes. The main process then enters
 * an infinite loop.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	pid_t child_pd;
	int n;

	for (n = 1; n < 6; n++)
	{
		child_pd = fork();
		if (child_pd > 0)
		{
			printf("Zombie process created, PID: %d\n", child_pd);
			sleep(1);
		}
		else
		{
			exit(0);
		}
	}
	infinite_while();
	return (0);
}