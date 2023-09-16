#include "search_algos.h"
#include <math.h>

/**
 * jump_list- function that searches for a value in a sorted list of
 * integers using the Jump search algorithm.
 * @list: is a pointer to the head of the list to search in
 * @size: is the number of nodes in list
 * @value: the value to search for
 * Return:  a pointer to the first node where value is located or
 * NULL if not present
 *
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *prev;
	size_t i, jump;

	if (list == NULL)
		return (NULL);
	jump = sqrt(size);
	prev = list;

	while (list->next != NULL && list->index < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n >= value)
			break;
		prev = list;

		for (i = 0; i < jump && list->next != NULL; i++)
			list = list->next;

	}

	printf("Value found between indexes [%lu] = [%lu]\n",
			prev->index, list->index);

	while (prev != NULL && prev->index < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
		{
			return (prev);
		}
		prev = prev->next;
	
	}
	return (NULL);
}
