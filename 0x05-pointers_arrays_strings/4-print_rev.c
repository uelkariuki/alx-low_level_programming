#include "main.h"

/**
  *print_rev- function that prints a string,
  *           in reverse, followed by a new line.
  *@s: string to be reversed
  */

void print_rev(char *s)
{
	/*find the length of the string*/
	int len = 0;
	int g;

	while (s[len] != '\0')
	{
		len++;
	}


	/*print the string in reverse order*/
	for (g = len - 1; g >= 0; g--)
	{
		_putchar(s[g]);

	}
	_putchar('\n');





}
