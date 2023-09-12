#include "search_algos.h"

/**
 * linear_search-  that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 * or -1 if not found in the array
 */

int linear_search(int *array, size_t size, int value)
{
	int i, found = 0, n;

	n = size;
	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < n; i++)
	{
		printf("Value checked array[%d] = [%d]\n",
				i, array[i]);
		if (array[i] == value)
		{
			found = 1;
			break;

		}
	}
	if (found == 0)
	{
		return (-1);
	}
	return (i);
}
