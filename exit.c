#include "shell.h"
/**
 * exit_cmd - exits the shell
 * @array: array
 * @av: av
 * @line: getline
 * @cont: executes
 * @ret_status: status to exit
 * Return: 0
 */
int exit_cmd(char **array, char *av[], char *line, int cont, int ret_status)
{
	int a = 0, stat_exit, number;

	while (array[a] != NULL)
	{
		a++;
	}
	if (a == 1)
	{
		free(array);
		free(line);
		exit(ret_status);
	}
	if (a >= 2)
	{
		for (a = 0; array[1][a] != '\0'; a++)
		{
			number = _isdigit(array[1][a]);
			if (number == 0)
			{
				print_errors(array, av, cont, 2);
				ret_status = 2;
				return (ret_status);
			}
		}
		stat_exit = _atoi(array[1]);
		free(array);
		free(array);
		exit(stat_exit);
	}
	return (ret_status);
}
