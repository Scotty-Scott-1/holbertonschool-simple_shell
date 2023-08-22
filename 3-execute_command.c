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
	int status;

	(void) status_e;

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

					return (2);
				}
			}
			wait(&status);
			free(full_path);
		}
		else
		{
			printf("%s: %d: %s: not found\n", program_name, i, input);
			return (127);

		}
		return (0);
	}
	return (2);
}
