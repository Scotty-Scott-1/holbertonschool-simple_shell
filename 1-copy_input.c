#include "main.h"

/**
 * copy_input - function takes a string  and copy it into a new file
 * @read_result:result of memory allocation
 * @input: string to copy
 * Return:character copy
 */
char *copy_input(ssize_t read_result, char *input)
{
	char *input_copy = NULL;

<<<<<<< HEAD
	input_copy = malloc(sizeof(char) * read_result + 1);

=======
	input_copy = malloc(sizeof(char) * (read_result) + 1);
>>>>>>> b0f112f4a662103d63843db3b55002e564075710
	if (input_copy == NULL)
	{
		perror("counldnt malloc");
			exit(-1);
	}

<<<<<<< HEAD
	strncpy(input_copy, input, read_result);
	input_copy[read_result] = '\0';

return (input_copy);
=======
	if (input != NULL)
	input_copy = strcpy(input_copy, input);

	return (input_copy);
>>>>>>> b0f112f4a662103d63843db3b55002e564075710
}
