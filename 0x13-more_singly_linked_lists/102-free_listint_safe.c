#include "lists.h"

/**
  *free_listint_safe- function that frees a listint_t list.
  *@h: a pointer to a head pointer
  *Return: the size of the list that was free’d
  */



size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *current_node, *next;

	if (h == NULL)
	{
		return (0);

	}

	current_node = *h;
	*h = NULL;

	while (current_node != NULL)
	{
		next = current_node->next;
		free(current_node);
		counter++;

		if (next >= current_node)
			break;

		current_node = next;

	}

	return (counter);

}
