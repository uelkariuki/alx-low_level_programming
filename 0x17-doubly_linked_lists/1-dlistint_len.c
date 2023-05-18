#include "lists.h"

/**
 * dlistint_len- returns the number of elements in a linked dlistint_t list
 * @h: pointer to the head of the doubly linked list
 * Return: the number of elements in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current_node = h;
	size_t counter = 0;

	while (current_node != NULL)
	{
		current_node = current_node->next;
		counter++;
	}
	return (counter);
}
