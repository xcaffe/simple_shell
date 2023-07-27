#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all the arguments
 * @av: array of strings
 * @ac: number of items
 * Return: 0
 */
int main(int ac, char **av)
{
	int a = 0;

	while (av[a])
	{
		printf("%s ", av[a]);
		a++;
	}
	printf("\n");
	return (0);
}
