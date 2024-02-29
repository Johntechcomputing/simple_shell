#include "Shell.h"

/**
 * _Own_Exit - couses normal process termination
 * @args: empty args
 *
 * Return: 0 to terminate the process
 */
int _Own_Exit(char **args)
{
	if (args[1])
	{
		return (atoi(args[1]));
	}
	else
	{
		return (0);
	}
}
