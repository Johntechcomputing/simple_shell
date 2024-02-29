#include "Shell.h"

/**
 * _Shell_In_Interactive - Our command line Interpreter
 *
 * Return: void
 */
void _Shell_In_Interactive(void)
{
	char *Line;
	char **Args;
	int Status = -1;

	do {
		printf("#cisfun$ ");
		Line = _Line_Read();
		Args = _Line_Split(Line);
		Status = _Execute_Args(Args);
		free(Line);
		free(Args);
		if (Status >= 0)
		{
			exit(Status);
		}
	} while (Status == -1);
}
