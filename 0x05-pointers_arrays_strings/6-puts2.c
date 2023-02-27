#include "main.h"

/**
  *puts2- function that prints every other character of a string, starting
  *with the first character, followed by a new line.
  *@str:string
  *Return: voidd
  */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);

	}
	_putchar('\n');



}
