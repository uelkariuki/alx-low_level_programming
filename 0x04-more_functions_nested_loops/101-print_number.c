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

