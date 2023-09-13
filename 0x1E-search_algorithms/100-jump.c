#include "search_algos.h"
#include <math.h>

/**
 * jump_search- Function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if not found
 *
 */

int jump_search(int *array, size_t size, int value)
{
	int i, start = 0, end = 0, jump, n;

	n = size;
	jump = sqrt(n);

	if (array == NULL)
	{
		return (-1);
	}
	while (end < n && array[end] < value)
	{
		printf("Value checked array[%d] = [%d]\n", end, array[end]);

		start = end;
		end += jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", start, end);
	if (end >= n || array[end] > value)
	{
		end = n - 1;
	}

	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
