#include "main.h"

/**
 * copy_input - function takes a string  and copy it into a new file
 * @read_result:result of memory allocation
 * @input:string to copy 
 * Return:character copy
 */
char *copy_input(ssize_t read_result, char *input)
{
	char *input_copy = NULL;

	input_copy = malloc(sizeof(char) * read_result);
	if (input_copy == NULL)
	{
		perror("counldnt malloc");
			exit(-1);
	}

	input_copy = strdup(input);
	if (input_copy == NULL)
	{
		free(input_copy);
	}

	return (input_copy);
}
