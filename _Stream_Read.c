#include "Shell.h"

/**
 * _Stream_Read - Stream that line will be read from
 *
 * Return: pointer that points to the Read line
 */
char *_Stream_Read(void)
{
	int BUFFERSIZE = 1024;
	int i = 0;
	char *LINE = malloc(sizeof(char) * BUFFERSIZE);
	int character;

	if (LINE == NULL)
	{
		fprintf(stderr, "allocation error in _READ_Stream");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		character = getchar();
		if (character == EOF)
		{
			free(LINE);
			exit(EXIT_SUCCESS);
		}
		else if (character == '\n')
		{
			LINE[i] = '\0';
			return (LINE);
		}
		else
		{
			LINE[i] = character;
		}
		i++;
		if (i >= BUFFERSIZE)
		{
			BUFFERSIZE += BUFFERSIZE;
			LINE = realloc(LINE, BUFFERSIZE);
			if (LINE == NULL)
			{
				fprintf(stderr, "reallocation error in _READ_Stream");
				exit(EXIT_FAILURE);
			}
		}
	}
}
