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
	size_t step, prev;
	listint_t *node;

	if (list == NULL)
		return (NULL);
	step = sqrt(size);
	prev = 0;
	node = list;
	while (node != NULL && node->index < size && node->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		prev = node->index;
		for (; node != NULL && node->index - prev < step && node->index < size - 1;)
			node = node->next;
		if (node->index - prev < step)
			break;
	}
	if (node != NULL)
	{
		printf("Value found between indexes [%lu] = [%lu]\n", prev,
				node->index);
	}
	else
		return (NULL);
	for (; prev <= (node != NULL ? node->index : prev) && prev < size; prev++)
	{
		if (node != NULL)
		{
			printf("Value checked at index [%lu] = [%d]\n", prev, node->n);
			if (node->n == value)
			{
				return (node);
			}
			node = node->next;
		}
	}
	return (NULL);
}
