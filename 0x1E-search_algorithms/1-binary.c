#include "search_algos.h"

/**
 * binary_search- a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, middle, n, right, i;

	n = size;
	right = n - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
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

		middle = (left + right) / 2;
		if (value == array[middle])
			return (middle);
		else if (value < array[middle])
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (-1);

}
