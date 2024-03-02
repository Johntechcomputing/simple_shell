#include "Shell.h"

/**
 * _Own_Exit - couses normal process termination
 * @args: Array of stringgs rep command & Arguments
 *
 * Return: 0 to terminate the process
 */
int _Own_Exit(char **args)
{
	/*int Status_Code = 0;*/

	if (args[1] != NULL)
	{
		/*Status_Code = atoi(args[1]);
		if (Status_Code < 0 || Status_Code > 255)
		{
			printf("Invalid exit status code\n");
			Status_Code = 1;
		}*/
		printf("Useage: exit\n");
		return (1);
	}
	return (0);
}
