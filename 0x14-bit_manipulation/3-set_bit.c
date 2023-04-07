#include "main.h"

/**
  *set_bit- function that sets the value of a bit to 1 at a given index
  *@n: pointer to the number/integer
  *@index: is the index, starting from 0 of the bit you want to set:
  *Return: 1 if it worked, or -1 if an error occurred
  */


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int holder;

	if (index > sizeof(unsigned int) * 8 - 1)
	{
		return (-1);

	}

	holder = 1 << index;
	/*if i have 10 and want to set bit at index 2 to 1 with this i*/
	  /*will go from 1010(old) to 1110(new)*/
	*n = (*n | holder);

	return (1);


}
