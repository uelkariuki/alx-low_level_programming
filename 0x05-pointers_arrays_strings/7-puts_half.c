#include "main.h"


/**
  *puts_half- function that prints half of a string, followed by a new line.
  *
  *@str: string to be half printed
  */

void puts_half(char *str)
{
	int length = 0;
	int start;

	while (*(str + length) != '\0')
	{
		length++;

	}
	start = length / 2;

	if (length % 2 != 0)
	{
		start++;

	}
	while (*(str + start) != '\0')
	{

		_putchar(*(str + start));
		start++;
	}
	_putchar('\n');


}
