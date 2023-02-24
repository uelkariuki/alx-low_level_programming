#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */


void print_number(int n)
{
	int divisor = 1;
	int i, digit, negative = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		negative = 1;
	}

	for (i = n; i > 9; i /= 10)
		divisor *= 10;
	for (; divisor >= 1; divisor /= 10)
	{
		digit = (n / divisor) % 10;
		_putchar('0' + digit);
	}
	if (negative)
		n = -n;
}





