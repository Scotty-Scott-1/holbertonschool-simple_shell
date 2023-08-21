#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

extern char **environ;
char *copy_input(ssize_t read_result, char *input);
char *get_path_value(void);
int main(int ac, char **argv);
void execute_command(char **argv, int i, char *input, char *program_name);
char *get_path(char *command);
char *get_input(void);
char **tokenize_array(char *input, char **argv, char *input_copy);
char *concat__command(char *command, char *path_token);
#endif /* MAIN_H */
