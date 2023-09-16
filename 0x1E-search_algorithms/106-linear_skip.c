#include "search_algos.h"

/**
 * linear_skip- function that searches for a value in a sorted skip
 * list of integers.
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 * Return: a pointer on the first node where value is located or NULL
 * if not found in list
 *
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (list == NULL)
	{
		return (NULL);
	}

	express = list->express;
	current = list;

	while (express)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (express->n >= value || express->next == NULL)
		{
			printf("Value found between indexes [%lu] = [%lu]\n",
					current->index, express->index);
			break;
		}
		current = express;
		express = express->express;
	}

	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
		{
			return (current);
		}
		if (current->next == NULL)
		{
			break;
		}
		current = current->next;
	}
	return (NULL);

}
