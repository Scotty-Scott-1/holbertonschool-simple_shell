#include "main.h"
/**
* exec_command - a function
* @command: a command
*
* Return: void
*/
void exec_command(char *command)
{
	const char *prefix = "/bin/sh";
	char *argv2[4];

	argv2[0] = "bin/sh";
	argv2[1] = "-c";
	argv2[2] = command;
	argv2[3] = NULL;
	if (execve(prefix, argv2, __environ) == -1)
	{
		perror("execve failed");
	}
}
