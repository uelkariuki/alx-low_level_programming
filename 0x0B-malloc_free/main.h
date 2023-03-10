#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>


char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *str_concat(char *s1, char *s2);
char *_strcat(char *dest, char *src);
void _puts(char *str);
int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);



#endif
