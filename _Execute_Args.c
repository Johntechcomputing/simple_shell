#include "Shell.h"

/**
 * _Execute_Args - map if command is a builtin or a process
 * @args: Command & its flags
 *
 * Return: 1 on sucess, 0 otherwise
 */
int _Execute_Args(char **args)
{
	unsigned long int i = 0;
	char *Builtin_Functions_List[] = {
		"cd",
		"env",
		"help",
		"exit"
	};
	int (*Builtin_Functions[])(char **) = {
		&_Own_Cd,
		&_Own_Env,
		&_Own_Help,
		&_Own_Exit
	};

	if (args[0] == NULL)
	{
		return (-1);
	}
	for (; i < sizeof(Builtin_Functions_List) / sizeof(char *); i++)
	{
		if (strcmp(args[0], Builtin_Functions_List[i]) == 0)
		{
			(*Builtin_Functions[i])(args);
			return (0);
		}
	}
	return (_New_Process(args));
}
