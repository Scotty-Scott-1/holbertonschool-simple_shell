#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

extern char **environ;
char* get_env_var(const char *var_name);

char* get_path_value(void)
{
	const char *var_name = "PATH";
	char *var_value = get_env_var(var_name);

	if(var_value == NULL)
	{
		perror("could not find path");
	}

	return (var_value);
}

char* get_env_var(const char *var_name)
{
	char **env = environ;
	int i = 0;

	while(env[i] != NULL)
	{
		if(strncmp(env[i], var_name, strlen(var_name)) == 0 && env[i][strlen(var_name)] == '=')
		{
			return (env[i] + strlen(var_name) + 1);
		}
	i++;
	}

	return (NULL);
}








