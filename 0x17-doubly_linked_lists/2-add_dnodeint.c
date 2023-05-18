#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	/*initailize new_node*/
	new_node->n = n;
	new_node->prev = NULL;

	/* if head is empty make new node the head*/
	if (*head == NULL)
	{
		new_node->next = NULL;

	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);

}
