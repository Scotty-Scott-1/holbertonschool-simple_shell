#include "main.h"

/**
* exec_command - a function
* @command: a command
*
* Return: void
*/
void exec_command(char *command, char *og_argv0)
{
	const char *prefix = "/bin/sh";
	char *argv2[4];
	char *error = " not found\n";

	argv2[0] = og_argv0;
	argv2[1] = "-c";
	argv2[2] = command;
	argv2[3] = NULL;
	if (execve(prefix, argv2, __environ) == -1)
	{
		write(2, argv2[0], strlen(argv2[0]));
		write(2, " :", 2);
		write(2, argv2[2], strlen(argv2[2]));
		write(2, error, strlen(error));
		(exit(EXIT_FAILURE));
	}
}
