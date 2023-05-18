#include "lists.h"

/**
 * delete_dnodeint_at_index- deletes the node at index index
 * of a dlistint_t linked list.
 * @head: a pointer to a pointer to the head of the doubly linked list
 * @index: is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int q;

	if (head == NULL || *head == NULL)
		return (-1);
	current_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		/*free(current_node);*/
		return (1);
	}

	for (q = 0; q < index && current_node != NULL; q++)
		current_node = current_node->next;

	if (current_node == NULL)
		return (-1);
	if (current_node->next != NULL)
		current_node->next->prev = current_node->prev;
	if (current_node->prev != NULL)
		current_node->prev->next = current_node->next;
	free(current_node);
	return (1);
}
