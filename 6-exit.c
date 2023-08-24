#include "main.h"
/**
 * __exit - function for exit the shell
 *@input: user's input
 *@name: name of commnad
 *@input_copy: for the path
 *@argv: a pointer to and array of pointers to a characters
 *@stat: status of exit
 * Return: void
 */
void __exit(char *input, char *name, char *input_copy, char **argv, int stat)
{

	int i = 0;

(void) name;
	while (argv[i] != NULL)
	{
		free(argv[i]);
		i++;
	}
	free(argv);
	free(input);
	free(input_copy);

	exit(stat);

}
