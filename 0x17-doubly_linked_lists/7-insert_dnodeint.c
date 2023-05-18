#include "lists.h"

/**
 * insert_dnodeint_at_index- inserts a new node at a given position.
 * @h: pointer to a pointer to the head of the doubly linked list
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: the data of the new node to be inserted
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;
	unsigned int q;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current_node = *h;
	for (q = 0; q < idx - 1 && current_node != NULL; q++)
		current_node = current_node->next;
	if (current_node == NULL || (q < idx - 1 && current_node->next == NULL))
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = current_node;
	new_node->next = current_node->next;

	if (current_node->next == NULL)
		current_node->next->prev = new_node;
	current_node->next = new_node;

	return (new_node);
}
