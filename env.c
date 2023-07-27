#include "shell.h"
/**
 * print_env - it prints the current environment
 * Return: 0
 */
int print_env(void)
{
	int a = 0;
	int b = 0;

	while (environ[b] != NULL)
	{
		a = 0;
		while (environ[b][a] != '\0')
		{
			_putchar(environ[b][a]);
			a++;
		}
		_putchar('\n');
		a++;
	}
	return (0);
}
