#include "lists.h"

/**
 *sum_dlistint- returns the sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to the head of the doubly linked list
 * Return: the sum of all the data (n) of a dlistint_t linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int total_sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		total_sum = total_sum + head->n;
		head = head->next;
	}
	return (total_sum);

}
