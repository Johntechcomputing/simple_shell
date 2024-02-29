#include "Shell.h"

/**
 * _Line_Read - read a line from stdin
 *
 * Return: pointer that points to a str with the line content
 */
char *_Line_Read(void)
{
	char *LINE = NULL;
	size_t BUFFERSIZE = 0;

	if (getline(&LINE, &BUFFERSIZE, stdin) == -1)
	{
		if (feof(stdin))
		{
			free(LINE);
			exit(EXIT_SUCCESS);
		}
		else
		{
			free(LINE);
			perror("error while reading the line from stdin");
			exit(EXIT_FAILURE);
		}
	}
	return (LINE);
}
