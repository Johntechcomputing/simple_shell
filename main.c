#include "Shell.h"

/**
 * main - Checks if the shell is called
 *
 * Return: 0 on success
 */
int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
	{
		_Shell_In_Interactive();
	}
	else
	{
		_Shell_Not_Interactive();
	}
	return (0);
}
