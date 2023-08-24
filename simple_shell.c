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
	char **token_array;
	int status = 0;

	(void) ac;
	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
		printf("$ ");
		read_result = getline(&input, &len, stdin);
		if (read_result == -1)
		{
			break;
		}
		input_copy = copy_input(read_result, input);
		token_array = tokenize_array(input, argv, input_copy);
		if (token_array[0] != NULL)
		{
			if (strcmp(token_array[0], "exit") == 0)
			{
				__exit(input, token_array[0], input_copy, token_array, status);
			}
		}
		if (token_array[0] != NULL && strcmp(argv[0], "exit") != 0)
		status = execute_command(token_array, counter_nb, input, progam_name,
		status);
		counter_nb++;
		for (i = 0; token_array[i] != NULL; i++)
		{
			free(token_array[i]);
		}
		free(token_array);
		free(input_copy);
	}
	free(input);
	return (status);
}
