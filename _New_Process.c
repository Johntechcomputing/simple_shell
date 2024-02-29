#include "Shell.h"

/**
 * _New_Process - Create New process
 * @args: array of strings that contains the command and its flags
 *
 * Return: 1 on Success, 0 on Failure.
 */
int _New_Process(char **args)
{
	pid_t pid;
	int Status;

	pid = fork();
	if (pid ==  0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("error in _New_Process: child process");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("error in _New_Process: forking");
	}
	else
	{
		do {
			waitpid(pid, &Status, WUNTRACED);
		} while (!WIFEXITED(Status) && !WIFSIGNALED(Status));
	}
	return (-1);
}
