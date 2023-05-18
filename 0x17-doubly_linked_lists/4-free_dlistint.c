#include "lists.h"

/**
 * free_dlistint- function that frees a dlistint_t list.
 * @head: pointer to the head of the doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head, *temp;

	while (current_node != NULL)
	{
		temp = current_node;
		current_node = current_node->next;
		free(temp);
	}
}
