#include "main.h"
/**
* shell_strtok - Entry point
* @input: character pointer
* @argv: character double pointer
* Return: void
*/
void shell_strtok(char *input,  char **argv)
{
<<<<<<< HEAD
        char *strcopy = NULL, *token = NULL;
        int count = 0, i = 0;
        char * command;
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
        argv[i] = NULL;
        command = argv[0];
        /*if(strncmp(argv[0], prefix, strlen(prefix)) != 0)
        {
        strcpy(path, "/bin/");
        strcat(path, argv[0]);
        }*/
        /*char *argv2[4];
        argv2[0] = "bin/sh";
        argv2[1] = "-c";
        argv2[2] = argv[0];
        argv2[3] = NULL;*/
        exec_command(command);
        /*if(execve(prefix,argv2, __environ) == -1)
        {
                perror("execve failed");
        }*/
        for (i = 0; i < count; i++)
        {
        free(argv[i]);
        }
        free(strcopy);
        free(argv);
=======
	char *strcopy = NULL, *token = NULL, *command, *og_argv0 = argv[0];
	int count = 0, i = 0, status;
	pid_t child_pid;

	strcopy = strdup(input);
	if (strcopy == NULL)
	perror("couldn't read");

	token = strtok(input, " \n");
	while (token != NULL)
	{ count++;
	token = strtok(NULL, " \n"); }
	count++;
	argv = (char **)malloc(sizeof(char *) * count);
	token = strtok(strcopy, " \n");
	for (i = 0; token != NULL; i++)
	{ argv[i] = strdup(token);
	token = strtok(NULL, " \n"); }
	argv[i] = NULL;

	if (count == 1 && strlen(argv[0]) == 0)
	{ free(strcopy);
	free(argv);
	return; }

	command = argv[0];
	child_pid = fork();
	if (child_pid == -1)
	perror("fork failed");
	else if (child_pid == 0)
	exec_command(command, og_argv0);
	else
	waitpid(child_pid, &status, 0);
	for (i = 0; i < count; i++)
	{ free(argv[i]);
	}
	free(strcopy);
	free(argv);


>>>>>>> 1542e19a47eda487d616f7acff73fc5d5a645500
}
