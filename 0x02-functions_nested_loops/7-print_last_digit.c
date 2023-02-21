#include "main.h"

/**
  *print_last_digit- function that prints the last digit of a number
  *@i: character to be checked
  *Return: value of the last digit
  */

int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;

	}

	_putchar(last_digit + '0');

	return (last_digit);

}
