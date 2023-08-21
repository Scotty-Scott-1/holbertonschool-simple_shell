#include "main.h"
/**
 * tokenize_array - function that takes a string as input and tokenizes it
 * @input: The string to be tokenised.
 * @argv: array of chararcters where pointers to be stored;
 * @input_copy:  A copy of the input string used for tokenization.
 *
 * Return: argv
 */

char **tokenize_array(char *input, char **argv, char *input_copy)
{
	const char *delim = " \n";
	char *token = NULL;
	int token_count = 0;
	int i = 0;


		token = strtok(input, delim);
		if (token == NULL)
		free(token);
		while (token != NULL)
		{
			token_count++;
			token = strtok(NULL, delim);

		}
		token_count++;

		argv = malloc(sizeof(char *) * token_count);

		for (i = 0, token = strtok(input_copy, delim); token != NULL; i++)
		{
			argv[i] = malloc(strlen(token) + 1);
			strcpy(argv[i], token);
			token = strtok(NULL, delim);
		}
			argv[i] = NULL;

		return (argv);
}
