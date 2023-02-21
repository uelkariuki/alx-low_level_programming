#include "main.h"

/**
  *print_alphabet_x10-  prints 10 times the alphabet, in lowercase
  *
  */

void print_alphabet_x10(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);

	}
	for (j = 0; j <= 10; j++)
	{
		_putchar('\n');

	}


}
