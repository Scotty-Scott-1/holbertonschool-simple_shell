#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

char * concat__command(char *command, char *path_token)
{
	char *file_path = NULL;
	int command_length = 0;
	int directory_length = 0;

		command_length = strlen(command);
		directory_length = strlen(path_token);
		file_path = malloc(command_length + directory_length + 2);
		strcpy(file_path, path_token);
		strcat(file_path, "/");
		strcat(file_path, command);

		return (file_path);


}
