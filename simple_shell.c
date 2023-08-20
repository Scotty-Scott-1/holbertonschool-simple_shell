#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"


int main(int ac, char **argv)
{

	char *input = NULL; /*inputcopy = NULL;*/
	size_t len = 0;
	char *input_copy = NULL;
	int i = 0;
	int counter_nb = 1;
	char *progam_name = argv[0];

(void) ac;
	while (1) {
	/*	printf("$ ");*/
		read_result = getline(&input, &len, stdin);

	argc += 1;
	do {
		/*printf("$ ");*/
		read = getline(&input, &len, stdin);
		if (read == -1)
		{
			if (feof(stdin))
			{
			break;
			}
		}
		shell_strtok(input, argv);

	} while (1);
	free(input);

return(0);

	return (0);
}

