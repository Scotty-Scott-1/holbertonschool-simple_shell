#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char **argv);
void shell_strtok(char *input,  char **argv);
void exec_command(char*command);

#endif /* MAIN_H */
