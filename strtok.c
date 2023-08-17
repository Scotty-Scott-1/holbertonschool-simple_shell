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
	char *strcopy = NULL, *token = NULL, *command, *og_argv0 = argv[0];
	int count = 0, i = 0, status;
	pid_t child_pid;

	strcopy = strdup(input);
	if (strcopy == NULL)
	perror("couldn't read");

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
		/*printf("%s\n", argv[i]);*/
	}
	argv[i] = NULL;
	command = argv[0];
	child_pid = fork();
	if (child_pid == -1)
	perror("fork failed");
	else if (child_pid == 0)
	exec_command(command, og_argv0);
	else
	waitpid(child_pid, &status, 0);
	for (i = 0; i < count; i++)
	{
	free(argv[i]);
	}
	free(strcopy);
	free(argv);


}
