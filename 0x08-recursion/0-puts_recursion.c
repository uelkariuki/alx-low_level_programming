#include "main.h"
#include <stdio.h>

/**
  *_puts_recursion- function that prints a string, followed by a new line.
  *
  *@s: string to be printed
  */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	puts(s);
}
