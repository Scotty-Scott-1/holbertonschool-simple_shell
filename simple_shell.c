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
<<<<<<< HEAD
	char *prompt = "(ssh) $ ";
	char *input = NULL; /**inputcopy = NULL;*/
=======

	char *input = NULL; /*inputcopy = NULL;*/
>>>>>>> 1542e19a47eda487d616f7acff73fc5d5a645500
	size_t len = 0;
	ssize_t read;

	(void)argv;
	argc += 1;
<<<<<<< HEAD
	while(1)
	{
	 	printf("%s", prompt);
		read = getline(&input, &len, stdin);
		if (read == -1)
		{
			perror("couldn't read");
			return (-1);
=======
	do {
		/*printf("$ ");*/
		read = getline(&input, &len, stdin);
		if (read == -1)
		{
			if (feof(stdin))
			{
			break;
			}
>>>>>>> 1542e19a47eda487d616f7acff73fc5d5a645500
		}
		
		shell_strtok(input, argv);
		printf("%s\n", input);
	free(input);
<<<<<<< HEAD
	}
=======


>>>>>>> 1542e19a47eda487d616f7acff73fc5d5a645500
	return (0);
}
