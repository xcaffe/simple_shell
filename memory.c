#include "shell.h"
/**
 * bfree - it frees a pointer
 * @ptr: address
 * Return: 0
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
