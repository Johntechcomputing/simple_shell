#include "Shell.h"

/**
 * _Line_Split - split string into multiple strings
 * @line: String to be Split
 *
 * Return: Pointer pointing to the new Array
 */
char **_Line_Split(char *line)
{
	int BUFFERSIZE = 64;
	int i = 0;
	char **ToKens = malloc(BUFFERSIZE * sizeof(char *));
	char *ToKen;

	if (!ToKens)
	{
		fprintf(stderr, "allocation error in _Line_Split: tokens\n");
		exit(EXIT_FAILURE);
	}
	ToKen = strtok(line, TOK_DELIM);
	while (ToKen != NULL)
	{
		/* handle comments */
		if (ToKen[0] == '#')
		{
			break;
		}
		ToKens[i] = ToKen;
		i++;
		if (i >= BUFFERSIZE)
		{
			BUFFERSIZE += BUFFERSIZE;
			ToKens = realloc(ToKens, BUFFERSIZE * sizeof(char *));
			if (!ToKens)
			{
				fprintf(stderr, "reallocation error in _Line_Split: tokens");
				exit(EXIT_FAILURE);
			}
		}
		ToKen = strtok(NULL, TOK_DELIM);
	}
	ToKens[i] = NULL;
	return (ToKens);
}
