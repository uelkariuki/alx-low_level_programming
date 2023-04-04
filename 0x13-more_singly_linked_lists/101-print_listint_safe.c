#include "lists.h"

/**
 * print_listint_safe- function that prints a listint_t linked list.
 * @head: pointer to the head of the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_node = head;
	size_t counter = 0;

	while (current_node != NULL)
	{
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		counter++;
		if (current_node <= current_node->next)
		{
			printf("-> [%p] %d\n", (void *)current_node->next, current_node->next->n);
			exit(98);
		}
		current_node = current_node->next;
	}

	return (counter);
}
