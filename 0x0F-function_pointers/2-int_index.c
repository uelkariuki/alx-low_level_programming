#include "function_pointers.h"

/**
  *int_index- function that searches for an integer.
  *@array: the pointer to the array to be searched through
  *@size: the number of elements in the array
  *@cmp: the pointer to the comparison function to be used
  *Return: the searched integer
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);

	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);

			}


		}
		return (-1);



	}




}
