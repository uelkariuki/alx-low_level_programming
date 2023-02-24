#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: void
 */


void print_number(int n)
{
	 int divisor = 1;

	/* Handle special case of minimum integer value */

	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648);
		return;
	}

	/* Handle negative integers */
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	/* Determine the divisor */

	while (n / divisor >= 10)
		divisor *= 10;

	/* Print each digit */
	while (divisor != 0)
	{
		_putchar((n / divisor) % 10 + '0');
		divisor /= 10;
	}
}

