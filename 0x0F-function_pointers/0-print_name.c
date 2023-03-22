#include "function_pointers.h"
#include <stdio.h>

/**
  *print_name - function that prints a name
  *@name:parameter string name
  *@f: function pointed to by f
  */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}

}

/**
  *print_string- function that prints a string
  *@str : string to be printed
  */


void print_string(char *str)
{
	printf("%s", str);
}

