#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

extern char **environ;

char *copy_input(ssize_t read_result, char *input);
char *get_path_value(void);
char *get_env_var(const char *var_name);
int main(int ac, char **argv);
int execute_command(char **argv, int i, char *input, char *program_name,
int status);
char *get_path(char *command);
char *get_input(void);
char **tokenize_array(char *input, char **argv, char *input_copy);
char *concat__command(char *command, char *path_token);
void __exit(char *input, char *name, char *input_copy, char **argv, int stat);
#endif /* MAIN_H */
