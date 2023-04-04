#include "lists.h"


/**
  *sum_listint- returns the sum of all the data (n) of a listint_t linked list
  *@head: pointer to the head of the list
  *Return: the sum of all the data (n) of a listint_t linked list.
  */

int sum_listint(listint_t *head)
{
	int sum_list = 0;

	if (head == NULL)
	{
		return (0);

	}

	while (head != NULL)
	{
		sum_list = sum_list + head->n;
		head = head->next;


	}

	return (sum_list);

}
