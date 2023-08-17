#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * main- Entry Point
 *
 * @argc: parameter
 * @argv: parameter
 * Return: int
 */

int main(int argc, char **argv)
{

	char *input = NULL; /*inputcopy = NULL;*/
	size_t len = 0;
	ssize_t read;

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


	return (0);
}
