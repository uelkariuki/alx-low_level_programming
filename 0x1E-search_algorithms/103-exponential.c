#include "search_algos.h"
#define min(a, b) ((a) < (b) ? (a) : (b))

/**
 * helper_binarySearch- helper function to do the binary search part
 * @array: a pointer to the first element of the array to search in
 * @start: lowest integer in the array
 * @end: highest integer in the array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if not found
 *
 */

int helper_binarySearch(int *array, int start, int end, int value)
{
	int mid, i;

	if (start <= end)
	{
		printf("Searching in array: ");

		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
		mid = (start + (end - start) / 2);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			return (helper_binarySearch(array, start, mid - 1, value));
		else
			return (helper_binarySearch(array, mid + 1, end, value));
	}
	return (-1);
}

/**
 * helper_exponenentialSearch- helper function to help do the
 * exponential search in the array
 * @array: a pointer to the first element of the array to search in
 * @start: lowest integer in the array
 * @end: highest integer in the array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if not found
 *
 */

int helper_exponenentialSearch(int *array, int start, int end, int value)
{
	int i = 1; /* 2 ^ 0 == 1*/

	if ((end - start) <= 0)
		return (-1);
	while (i < (end - start))
	{
		if (array[i] < value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			i *= 2; /* it will increase as a power of 2*/
		}
		else
		{
			break; /* when array[i] crosses the value element*/
		}

	}
	printf("Value found between indexes [%d] and [%d]\n", i / 2, min(i, end));

	/* search within the sub array*/
	return (helper_binarySearch(array, i / 2, min(i, end), value));
}

/**
 * exponential_search- function that searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if not found
 *
 */

int exponential_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);

	}
	return (helper_exponenentialSearch(array, 0, size - 1, value));
}
