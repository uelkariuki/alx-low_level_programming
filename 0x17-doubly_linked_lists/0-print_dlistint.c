#include "lists.h"

/**
 * print_dlistint- function that prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the double linked list
 * Return: all the elements of a dlistint_t list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current_node = h;

	size_t counter = 0;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		counter++;

	}
	printf("\n");
	return (counter);

}
