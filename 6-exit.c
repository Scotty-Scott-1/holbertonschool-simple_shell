#include "main.h"

void __exit(char * input, char *name, char *input_copy, char **argv)

{

	int i = 0;

(void) name;
	while(argv[i] != NULL)
	{
		free(argv[i]);
		i++;
	}
	free(argv);
	free(input);
	free(input_copy);


	exit(127);
return;
}
