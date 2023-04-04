#include "lists.h"

/**
  *insert_nodeint_at_index-function that inserts a new node at agiven position
  *@head: pointer to a head pointer of the linked list
  *@idx: the index of the list where the new node should be added.
  *@n: the integer(data)
  *Return: the address of the new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *the_new_node, *temp;
	unsigned int q;

	the_new_node = malloc(sizeof(listint_t));

	if (the_new_node == NULL)
	{
		return (NULL);

	}
	the_new_node->n = n;

	if (*head == NULL || idx == 0)
	{
		the_new_node->next = *head;
		*head = the_new_node;
		return (the_new_node);

	}
	else
	{
		temp = *head;
		for (q = 0; q < idx - 1 && temp != NULL; q++)
		{
			temp = temp->next;
		}

	}
	if (temp == NULL)
	{
		free(the_new_node);
		return (NULL);
	}

	the_new_node->next = temp->next;
	temp->next = the_new_node;


	return (the_new_node);

}
