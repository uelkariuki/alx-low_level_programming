#include "search_algos.h"

/**
 * helper_interpolation- helper function that searches for a value in a
 * sorted array of integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @low: lowest integer in the array
 * @high: highest integer in the array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if not found
 */

int helper_interpolation(int *array, int low, int high, int value)
{
	size_t pos = 2109;

	if (low <= high && value >= array[low] && value <= array[high])
	{

		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
		{
			return (helper_interpolation(array, pos + 1, high, value));
		}

		if (array[pos] > value)
		{
			return (helper_interpolation(array, low, pos - 1, value));
		}
	}
	else
	{
		printf("Value checked array[%ld] is out of range\n", pos);
	}
	return (-1);
}

/**
 * interpolation_search- function that searches for a value in a
 * sorted array of integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if not found
 */


int interpolation_search(int *array, size_t size, int value)
{

	if (array == NULL)
	{
		return (-1);
	}
	return (helper_interpolation(array, 0, size - 1, value));
}
