#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
 * get_path - function that Get the path object
 * @command: pointer to a string 
 * Return: NULL if the path doesn't exist or pointer 
 */
char *get_path(char *command)
{
	char *path = NULL;
	char *path_copy = NULL;
	char *path_token = NULL;
	char *file_path = NULL;
	struct stat buffer;

	path = get_path_value();

	if (path != NULL)
	{
		path_copy = strdup(path);
		path_token = strtok(path_copy, ":");

		while (path_token != NULL)
		{
			file_path = concat__command(command, path_token);

			if (stat(file_path, &buffer) == 0)
			{
				free(path_copy);
				return (file_path);
			}

			free(file_path);
			path_token = strtok(NULL, ":");
		}

		free(path_copy);
		if (stat(command, &buffer) == 0)
		{
			return (command);
		}

		return (NULL);
	}

	return (NULL);
}
