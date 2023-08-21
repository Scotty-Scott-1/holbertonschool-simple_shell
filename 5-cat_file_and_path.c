#include "main.h"

/**
 *concat__command - function that concat file and path
 * @command: parameter to concatenate 
 * @path_token: parameter to concatenate with command 
 * @return: pointer to the new string concat
 */
char *concat__command(char *command, char *path_token)
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
