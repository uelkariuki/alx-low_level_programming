#include "main.h"


/**
  *binary_to_uint- function that converts a binary number to an unsigned int
  *@b: pointer to a string of 0 and 1 chars
  *Return: the converted number or 0 if b is NULL or not either 0 or 1
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int u_int_value = 0;
	unsigned int power = 0;
	unsigned int q = strlen(b);
	int index;

	if (b == NULL)
	{
		return (0);

	}

	for (index = q - 1; index >= 0; index--)
	{
		if (b[index] == '1')
		{
			u_int_value = u_int_value + (1 << power);

		}

		else if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
		power++;

	}
	return (u_int_value);


}
