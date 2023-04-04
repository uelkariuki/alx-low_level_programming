#include "lists.h"

/**
  *get_nodeint_at_index- returns the nth node of a listint_t linked list.
  *@head: pointer to the head of the linked list
  *@index: the index of the node, starting at 0
  *Return: the nth node of a listint_t linked list.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int q = 0;

	while (head != NULL && q < index)
	{
		head = head->next;
		q++;

	}

	if (q == index)
	{
		return (head);

	}
	else
	{
		return (NULL);
	}

}

