#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

void execute_command(char **argv, int i, char *input, char *program_name)
{
	char *command = NULL, *full_path = NULL;
	pid_t pid;
	int status;

	if (argv)
	{

		command = argv[0];

		full_path = get_path(command);

		if (full_path != NULL)
		{
			pid = fork();

			if (pid == 0)
			{
				if (execve(full_path, argv, environ) == -1)
				{
					exit(0);
				}
			}
			wait(&status);
		}
		else
		{
			printf("%s: %d: %s: not found\n", program_name, i, input);
		}
	}
}
