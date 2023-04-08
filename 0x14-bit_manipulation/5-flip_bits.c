#include "main.h"

/**
  * flip_bits- function that returns the number of bits you
  *            would need to flip to get from one number to another
  *@n: number(one) to be flipped like the origin number
  *@m: number (two) like the integer to target and
  *    know how many bits to be flipped to get to it
  *Return:the number of bits you would need to flip to get
  *       from one number to another.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int holder_XOR_value;
	unsigned int counter_bits = 0;

	holder_XOR_value = n ^ m;

	while (holder_XOR_value > 0)
	{
		if (holder_XOR_value & 1)
		{
			counter_bits++;
		}
		/* right shifting by 1 so as to like halve it to*/
		/*go down the loop and determine the total*/
		/*count of bits needed for the bit flipping process*/
		holder_XOR_value >>= 1;
	}

	return (counter_bits);

}
