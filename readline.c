#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints "$ ", wait, prints it on the next line
 * Return: 0;
 */
int main(void)
{
	size_t length = 1024;
	char *buffer = malloc(1024);

	while (1)
	{
		printf("$ ");
		getline(&buffer, &length, stdin);
		printf("%s", buffer);
	}
	return (0);
}
