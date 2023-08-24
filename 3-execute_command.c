#include "main.h"

/**
 * execute_command - function that execute the command
 * @argv: a pointer to and array of pointers to a characters
 * @i: index or counter using withing a function
 * @input: user's input
 * @status_e: void
 * @program_name:name of the program being execute
 * Return:always success
 */

int execute_command(char **argv, int i, char *input, char *program_name,
int status_e)
{
	char *command = NULL, *full_path = NULL;
	pid_t pid;

	status_e = 0;

	if (argv)
	{
		command = argv[0];
		full_path = get_path(command);
		if (full_path != NULL)
		{
			pid = fork();
			if (pid == 0)
			{
				execve(full_path, argv, environ);
			}

			wait(&status_e);
			free(full_path);

			if (WEXITSTATUS(status_e) == 2)
			{
			status_e = 2;
			return (status_e);
			}
		}
		else
		{
			printf("%s: %d: %s: not found\n", program_name, i, input);
			status_e = 127;
			return (status_e);
		}
		status_e = 0;
		return (status_e);
	}
	return (status_e);
}
