#include "main.h"

/**
  *print_binary-  function that prints the binary representation of a number.
  *@n: the integer to be converted to a binary
  *Return: printed binary number
  */

void print_binary(unsigned long int n)
{
	int m, q;

	/* finding the most significant bit present at left most */
	for (m = 31; m >= 0; m--)
	{
		if ((n >> m) & 1)
		{
			break;
		}

	}
	/* using the most significant bit and loop down to find the binary*/

	if (m ==  -1) /* handle the special case of n being 0 */
	{
		_putchar('0');

	}
	for (q = m; q >= 0; q--)
	{
		if ((n >> q) & 1)
		{
			_putchar('1');


		}
		else
		{
			_putchar('0');

		}

	}

}
