#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main.h"


int main(int ac, char **argv)
{
	ssize_t read_result = 0;
	char *input = NULL;
	size_t len = 0;
	char *input_copy = NULL;
	int i = 0;
	int counter_nb = 1;
	char *progam_name = argv[0];

(void) ac;
	while (1) {
	/*	printf("$ ");*/
		read_result = getline(&input, &len, stdin);

		if(read_result == -1)
		{
			break;
		}

		input_copy = copy_input(read_result, input);

		argv = tokenize_array(input, argv, input_copy);

		execute_command(argv, counter_nb, input, progam_name);
		counter_nb++;

		for (i = 0;argv[i] != NULL; i++)
		{
			free(argv[i]);
		}

		free(argv);
		free(input_copy);
	}
free(input);

return(0);

}

