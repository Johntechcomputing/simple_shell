#include "Shell.h"

/**
 * _Own_Cd - changes working directory of the current shell execution
 * environment
 * @args: The Target Directory
 *
 * Return: 1 one success, else 0
 */
int _Own_Cd(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "expected argument to \"cd\"\n");
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("error in _Own_Cd.c: changing dir\n");
		}
	}
	return (-1);
}
