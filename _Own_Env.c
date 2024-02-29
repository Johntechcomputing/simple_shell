#include "Shell.h"

/*extern char **Environment;*/

/*char *Environment[] = {
	"PATH=/bin:/usr/bin",
	"HOME=/home/user",
	NULL
};*/

/**
 * _Own_Env - Function to print enviromental variables
 * @args: Arguments
 *
 * Return: 1 on success, else 0
 */
int _Own_Env(char **args)
{
	int i = 0;
	(void)(**args);

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (-1);
}
