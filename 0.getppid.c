#include <stdio.h>
#include <unistd.h>
/**
 * main - prints the PID of the parent process
 * Return: 0
 */
int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("faithful %u\n", my_pid);
	my_pid = getppid();
	printf("aham %u\n", my_pid);
	return (0);
}
