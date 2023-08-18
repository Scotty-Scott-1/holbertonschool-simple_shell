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
	char *prompt = "(ssh) $ ";
	char *input = NULL; /**inputcopy = NULL;*/
	size_t len = 0;
	ssize_t read;

	(void)argv;
	argc += 1;
	while(1)
	{
	 	printf("%s", prompt);
		read = getline(&input, &len, stdin);
		if (read == -1)
		{
			perror("couldn't read");
			return (-1);
		}
		
		shell_strtok(input, argv);
		printf("%s\n", input);
	free(input);
	}
	return (0);
}
