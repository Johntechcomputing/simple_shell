#ifndef SHELL_H
#define SHELL_H

/*---LIBRARIES---*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

/*---MACROS---*/
#define TOK_DELIM " \t\r\n\a\""

/*--PROTOTYPES--*/
extern char **environ;

void _Shell_Not_Interactive(void);
void _Shell_In_Interactive(void);

int _Execute_Args(char **args);
int _New_Process(char **args);
char **_Line_Split(char *line);
char *_Line_Read(void);
char *_Stream_Read(void);

int _Own_Env(char **args);
int _Own_Cd(char **args);
int _Own_Exit(char **args);
int _Own_Help(char **args);

#endif /*SHELL_H*/
