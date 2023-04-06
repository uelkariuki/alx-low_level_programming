#include "main.h"

/**
  *print_binary-  function that prints the binary representation of a number.
  *@n: the integer to be converted to a binary
  *Return: printed binary number
  */

void print_binary(unsigned long int n)
{
	long int index_binary;

	/* binary (32) but here is zero indexed 0 - 31*/
	for (index_binary = 32; index_binary >= 0; index_binary--)
	{
		if ((n >> index_binary) & 1)
		{
			_putchar('1');

		}
		else
		{
			_putchar('0');


		}



	}






}
