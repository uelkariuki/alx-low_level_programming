#include "lists.h"


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
