#include "lists.h"

/**
  *add_node_end- function that adds a new node at the end of a list_t list.
  *@head: pointer to the head of the list
  *@str: string
  *Return: the address of the new element
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);

	}
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);

	new_node->next = NULL; /* ensure at end of last node of the list*/
	if (*head == NULL)
	{
		*head = new_node;
		/* account for case where we have an empty list at start*/
	}
	else /* *head != NULL*/
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;

		}
		last->next = new_node;
	}
	return (new_node);
}

