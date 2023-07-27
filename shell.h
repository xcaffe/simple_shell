#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>

int print_env(void);
extern char **environ;
int print_env(void);
int exit_cmd(char **array, char *av[], char *line, int cont, int ret_status);
void print_errors(char **array, char *av[], int cont, int num);
int _putchar(char c);
int _atoi(char *s);
int _isdigit(int c);

#endif
