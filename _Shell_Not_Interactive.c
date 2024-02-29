#include "Shell.h"

/**
 * _Shell_Not_Interactive - Our command line interpreter
 *
 * Return: void
 */
void _Shell_Not_Interactive(void)
{
	char *Line;
	char **Args;
	int Status = -1;

	do {
		Line = _Stream_Read();
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
