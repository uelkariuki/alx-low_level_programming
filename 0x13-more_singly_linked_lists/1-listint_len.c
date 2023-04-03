#include "lists.h"

/**
  *listint_len- returns the number of elements in a linked listint_t list.
  *@h: the head of the linked lidt node
  *Return: the number of elements in a linked listint_t list.
  */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != 0)
	{
		if (h->n == 0)
		{
			printf("(nil)");

		}
		else
		{
			printf("%", h->n);


		}

		h = h->next;
		counter++;


	}
	return (counter);



}
