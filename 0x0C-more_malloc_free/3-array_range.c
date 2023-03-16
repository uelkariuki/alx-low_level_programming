#include "main.h"


/**
  *array_range-function that creates an array of integers.
  *@min: the minimumm integer in the array
  *@max: the maximum integer in the array
  *Return: the pointer to the newly created array
  */


int *array_range(int min, int max)
{
	int i;
	int *result;
	int size;

	if (min > max)
	{
		return (NULL);

	}
	size = max - min + 1;

	result = (int *) malloc(sizeof(int) * size);

	if (result == NULL)
	{
		return (NULL);

	}

	for (i = 0; i < size; i++)
	{
		result[i] = min + i;

	}
	return (result);

}
