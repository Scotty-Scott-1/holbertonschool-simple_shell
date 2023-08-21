#include "main.h"

/**
 * execute_command - function that execute the command
 * @argv: a pointer to and array of pointers to a characters
 * @i: index or counter using withing a function
 * @input: user's input
 * @program_name:name of the program being execute
 * Return:always success
 */
void execute_command(char **argv, int i, char *input, char *program_name)
{
	char *command = NULL, *full_path = NULL;
	pid_t pid;
	int status;
	if (argv && argv[0] && argv[0][0] != '\0')
	{

		command = argv[0];

		full_path = get_path(command);

		if (full_path != NULL)
		{			
			pid = fork();
		}

			if (pid == 0)
			{
				if (execve(full_path, argv, environ) == -1)
				{
					exit(0);
				}
			}
			wait(&status);
		}
		else if (argv == NULL) 
		{
			printf("%s: %d: %s: command not provided\n", program_name, i, input);
		}
		else
		{
			 printf("%s: %d: %s: command not found\n", program_name, i, input);
        }
	
} 
