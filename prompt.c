#include "shell.h"
/**
 * prompt - This is to print the prompt
 * Return: 0;
 */
void prompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
