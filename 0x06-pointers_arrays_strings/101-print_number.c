#include "main.h"


/**
  *print_number- function that prints an integer
  *@n: integer to be printed
  */

void print_number(int n)
{
	int reversed = 0;
	int digit_count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/*reverse the digits of the number*/
	while (n > 0)
	{
		reversed = reversed * 10 + (n % 10);
		n /= 10;
		digit_count++;
	}
	if (reversed == 0)
	{
		_putchar('0');

	}
	/*print each digit of the reversed number*/
	while (reversed > 0)
	{
		_putchar((reversed % 10) + '0');
		reversed /= 10;

	}

}
