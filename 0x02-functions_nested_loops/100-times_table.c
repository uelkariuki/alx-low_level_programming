#include "main.h"

/**
  *print_times_table-function that prints the n times table, starting with 0.
  *
  *@n: number of rows and columns in the table
  *If n is greater than 15 or less than 0, function not print anything
  */

void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			result = i * j;
			{
				if (result < 10)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
	_putchar('\n');
}
