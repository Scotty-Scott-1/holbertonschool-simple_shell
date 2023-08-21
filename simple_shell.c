#include "main.h"

/**
 * main - runs the shell program
 *@ac: number of arguments comand-line argument passed to the program
 *@argv: array of pointers to characters
 * Return: 0 on success
 */
int main(int ac, char **argv)
{
	ssize_t read_result = 0;
	size_t len = 0;
	char *input = NULL, *input_copy = NULL;
	int i = 0, counter_nb = 1;
	char *progam_name = argv[0];


(void) ac;
	while (1)
	{
		printf("$ ");
		read_result = getline(&input, &len, stdin);

		if (read_result == -1)
		{
			break;
		}

		input_copy = copy_input(read_result, input);

		argv = tokenize_array(input, argv, input_copy);

		if(argv[0] != NULL)
		{
			if(strcmp(argv[0], "exit") == 0)
			{
				__exit(input, argv[0], input_copy, argv);
			}
		}
		if(argv[0] != NULL && strcmp(argv[0], "exit") != 0)
		execute_command(argv, counter_nb, input, progam_name);

		counter_nb++;

		for (i = 0; argv[i] != NULL; i++)
		{
			free(argv[i]);
		}

		free(argv);
		free(input_copy);
	}
free(input);

return (0);

}
