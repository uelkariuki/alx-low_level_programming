#include "lists.h"

/**
  *add_nodeint_end-function that adds a new node at the end of listint_t list
  *@head: the head of the linked list
  *@n: integer
  *Return: the address of the new element
  */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_at_end;
	listint_t *last;


	node_at_end = malloc(sizeof(listint_t));

	if (node_at_end == NULL)
	{
		return (NULL);

	}

	node_at_end->n = n;

	node_at_end->next = NULL; /* ensure we are at at the end*/
	if (*head == NULL)
	{
		*head = node_at_end;

	}
	else
	{
		last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = node_at_end;
	}

	return (node_at_end);

}
