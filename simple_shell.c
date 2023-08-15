#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char **argv)
{
char *input = NULL; /**inputcopy = NULL;*/
size_t len = 0;
ssize_t read;
char *strcopy = NULL, *token = NULL;
int count = 0, i = 0;

argc +=1;
do {
	printf("$ ");
	read = getline(&input, &len, stdin);
	if (read == -1)
	{
		perror("couldn't read");
		break;
	}
	strcopy = strdup(input);
	if (strcopy == NULL)
	{
		perror("couldn't read");
		break;
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
	{ argv[i] = strdup(token);
	token = strtok(NULL, " \n");
	printf("%s\n", argv[i]); }
for (i = 0; i < count; i++)
{ free(argv[i]); }
free(strcopy);
free(argv);
} while (1);
free(input);
return (0);
}
