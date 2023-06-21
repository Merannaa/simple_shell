#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlb.h>
#include <unstid.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <limits.h>

/*shell-fstring.c*/
int _strlen(char *);
int _strcmp(char *, char *);
char *_strcat(char *, char *);

/*shell_f1string.c*/
char *_strcpy(char *, char *, int);
char *_strdup(const char *);
void _puts(char*);
int _putchar(char);

/*shell_env.c*/
char *_getenv(char **, char *);
void print_env(char **);

#endif
