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
	skiplist_t *node, *jump;

	if (list == NULL)
	{
		return (NULL);
	}

	node = jump = list;

	while (jump->express != NULL && jump->express->n < value)
	{
		node = jump;
		jump = jump->express;
		printf("Value checked at index [%lu] = [%d]\n", jump->index, jump->n);

	}

	if (jump->express == NULL)
	{
		node = jump;
		while (jump->next != NULL)
			jump = jump->next;

	}
	printf("Value found between indexes [%lu] = [%lu]\n",
			node->index, jump->index);
	while (node != NULL && node->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n == value)
		{
			return (node);
		}
		node = node->next;
	}

	return (NULL);

}
