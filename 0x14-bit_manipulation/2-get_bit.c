#include "main.h"

/**
  *get_bit- function that returns the value of a bit at a given index
  *@n: the number to retrieve the bit from
  *@index: is the index, starting from 0 of the bit you want to get
  *Return: the value of the bit at index index or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_in_index;

	if (index > n)
	{
		return (-1);

	}

	bit_in_index = ((n >> index) & 1);

	return (bit_in_index);


}
