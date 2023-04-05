#include "lists.h"

/**
 * print_listint_safe- function that prints a listint_t linked list.
 * @head: pointer to the head of the linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_node, *fast_node;
	size_t counter = 0;

	if (head == NULL)
	{
		exit(98);

	}
	slow_node = fast_node = head;

	while (slow_node && fast_node && fast_node->next)
	{
		printf("[%p] %d\n", (void *)slow_node, slow_node->n);
		slow_node = slow_node->next;
		fast_node = fast_node->next;

		if (slow_node == fast_node)
		{
			printf("[%p] %d\n", (void *)slow_node, slow_node->n);
			printf("-> [%p] %d\n", (void *)fast_node, fast_node->n);
			return (counter + 1);

		}
		counter++;

	}

	/* printing of the last node*/
	if (slow_node)
	{
		printf("[%p] %d\n", (void *)slow_node, slow_node->n);
		counter++;

	}

	return (counter);

}
