#include "function_pointers.h"

/**
  *array_iterator- function that executes a function given as a parameter on
  *                each element of an array
  *@array: array containing the elements
  *@size: the size of the array
  *@action: pointer to the function you need to use
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
	{
		return;

	}
	if (size <= 0)
	{
		return;
	}
	if (action == NULL)
	{
		return;

	}
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
