#include "Shell.h"

/**
 * _Own_Help - print help
 * @args: arguments
 *
 * Return: 1 on success, 0 otherwise
 */
int _Own_Help(char **args)
{
	char *Builtin_Functions[] = {
		"cd",
		"env",
		"help",
		"exit"
	};
	unsigned int i = 0;
	(void)(**args);

	printf("\n---help simple_shell---\n");
	printf("Type a command and its arguments, then hit enter\n");
	printf("Built-in commands:\n");
	for (; i < sizeof(Builtin_Functions) / sizeof(char *); i++)
	{
		printf("  -> %s\n", Builtin_Functions[i]);
	}
	printf("Use the man command for information on other programs.\n\n");
	return (-1);
}
