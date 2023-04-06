#include "main.h"

/**
  *print_binary-  function that prints the binary representation of a number.
  *@n: the integer to be converted to a binary
  *Return: printed binary number
  */

void print_binary(unsigned long int n)
{
	unsigned long int index_binary;

	/* find leftmost bit by shifting i to the left til half of nreached*/
	while (index_binary <= n >> 1)
	{
		index_binary <<= 1;


	}

	while (index_binary > 0)
	{
		if (n & index_binary)
		{
			_putchar('1');


		}
		else
		{
			_putchar('0');


		}

		index_binary >>= 1;



	}


}
