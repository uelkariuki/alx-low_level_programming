#include "lists.h"

/**
 * print_listint_safe- function that prints a listint_t linked list.
 * @head: pointer to the head of the linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_node = NULL, *another_node = NULL;
	size_t counter = 0;
	size_t a_new_node = 0;

	if (head == NULL)
	{
		exit(98);

	}
	current_node  = head;

	while (current_node)
	{
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		counter++;


		if (current_node->next >= current_node)
		{
			another_node = current_node->next;

			while (current_node != another_node && a_new_node < counter)
			{
				printf("[%p] %d\n", (void *)another_node, another_node->n);
				a_new_node++;
				another_node = another_node->next;
			}
			break;
		}
		current_node = current_node->next;
	}
	
	return (counter);

}
