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
 * shell_strtok - Entry point
 * @input: character pointer
 * @argv: character double pointer
 * Return: void
 */

void shell_strtok(char *input,  char **argv)
{
	char *strcopy = NULL, *token = NULL;
	int count = 0, i = 0;

	strcopy = strdup(input);
	if (strcopy == NULL)
	{
		perror("couldn't read");
	}
	token = strtok(input, " \n");
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, " \n");
	}
	count++;
	argv = (char **)malloc(sizeof(char *) * count);
	token = strtok(strcopy, " \n");
	for (i = 0; token != NULL; i++)
	{
		argv[i] = strdup(token);
		token = strtok(NULL, " \n");
		printf("%s\n", argv[i]);
	}
	for (i = 0; i < count; i++)
	{
	free(argv[i]);
	}
	free(strcopy);
	free(argv);
}
