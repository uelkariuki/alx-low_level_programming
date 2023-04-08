#include "main.h"

/**
  *clear_bit- function that sets the value of a bit to 0 at a given index.
  *@n: pointer to an integer
  *@index: index is the index, starting from 0 of the bit you want to set
  *Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int holder;


	if (index > sizeof(unsigned int) * 8 - 1)
	{
		return (-1);

	}


	holder = (1 << index);

	/* if i have a case of 1010 and clear bit at index 3 it will*/
	   /*end up as 0010*/

	*n = *n & (~holder);

	return (1);


}
