#include "lists.h"

/**
 * add_dnodeint_end- adds a new node at the end of a dlistint_t list.
 * @head: a pointer to a pointer to the head of a doubly lionked list
 * @n: data value to be stored in the newly made new_node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current_node;
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	/* initialize the new_node*/
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
		new_node->prev = current_node;
	}
	return (new_node);




}
