#include "search_algos.h"

/**
 * helper_advanced_binary- helper function to help do advanced binary
 * @array: a pointer to the first element of the array to search in
 * @left: the left most number of the array
 * @right: the right most number of the array
 * @value: the value to search for
 * Return: the index where value is located or -1 if not found
 *
 */

int helper_advanced_binary(int *array, int left, int right, int value)
{
	int middle, i;

	if (right >= left)
	{
		middle = left + ((right - left)) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}

		if (array[middle] == value)
		{
			if (middle == 0 || array[middle - 1] < value)
				return (middle);
			else
				return (helper_advanced_binary(array, left, middle, value));
		}
		else if (array[middle] > value)
			return (helper_advanced_binary(array, left, middle - 1, value));
		else
			return (helper_advanced_binary(array, middle + 1, right, value));
	}
	return (-1);

}

/**
 * advanced_binary- function that searches for a value in a sorted
 * array of integers.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located or -1 if not found
 *
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}

	return (helper_advanced_binary(array, 0, size - 1, value));

}
