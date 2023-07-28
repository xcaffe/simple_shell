#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - splits a string and returns an array of each word of the string
 * @void: nothing
 * Return: 0
 */
int main(void)
{
	size_t length = 1024;
	char *buffer = malloc(1024);
	char *toks;

	while (1)
	{
		printf("$ ");
		getline(&buffer, &length, stdin);
		printf("buffer getline: %s", buffer);

		toks = strtok(buffer, " ");
		while (toks)
		{
			printf("buffer strtok: %s\n", toks);
			toks = strtok(NULL, " ");
		}
	}
	return (0);
}
