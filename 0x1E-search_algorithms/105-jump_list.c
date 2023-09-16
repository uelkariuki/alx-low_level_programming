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
	listint_t *prev = list;
	size_t i, jump = sqrt(size);
	int checked = 0;

	if (list == NULL)
		return (NULL);
	for (i = 0; i < 4 && list->next != NULL; i++)
		list = list->next;
	while (list->next != NULL && list->index < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n > value)
		{
			checked = 1;
			break;
		}
		prev = list;
		checked = 0;
		for (i = 0; i < jump && list->next != NULL; i++)
			list = list->next;
	}
	if (!checked && list->index < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, list->index);
	if (checked)
		prev = prev->next;
	while (prev != NULL && prev->index < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);

		prev = prev->next;
	}
	return (NULL);
}
