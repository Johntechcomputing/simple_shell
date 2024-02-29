#include "Shell.h"

/**
 * _Own_Exit - couses normal process termination
 * @args: Array of stringgs rep command & Arguments
 *
 * Return: 0 to terminate the process
 */
int _Own_Exit(char **args)
{
	int Status_Code;

	if (args[1] != NULL)
	{
		Status_Code = atoi(args[1]);
		if (Status_Code >= 0 && Status_Code <= 255)
		{
			exit(Status_Code);
		}
		else
		{
			printf("Invalid exit status code\n");
		}
	}
	else
	{
		exit(0);
	}
}
