#include "lists.h"
#include <stdio.h>

/**
  *print_listint- function that prints all the elements of a listint_t list.
  *@h: the head of the node of the linked list
  *Return: the number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0; /*helps to keep track of the elements present*/


	while (h != 0)
	{
		if (h->n == 0)
		{
			printf("The list is null\n");

		}
		else
		{
			printf("%d\n", h->n);
		}

		h = h->next;
		counter++;


	}

	return (counter);

}
