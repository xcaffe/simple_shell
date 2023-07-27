#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
/**
 * main - executes the command ls -l /tmp in 5 different child processes
 * Return: Always 0
 */
int main(void)
{
	pid_t my_pid;
	pid_t child_pid = 1;
	int a = 0;
	int state;
	char *argv[] = {"bin/ls", "-l", "tmp/", NULL};

	my_pid = getpid();
	while (a <= 4 && (child_pid != 0))
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			printf("error");
			return (1);
		}
		wait(&state);
		a++;
	}
	if (child_pid == 0)
	{
		printf("--------------------------------\n\n");
		printf("Faithful:  %u\n\nChinaza:  %u\n\n", getpid(), getppid());
	}
	else
	{
		printf("%u Welcome to the platform: %u\n", my_pid, child_pid);
	}
	if (execve(argv[0], argv, NULL) == -1)
	{
	}
	return (0);
}
