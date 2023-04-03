#include "lists.h"

/**
  *free_listint-  function that frees a listint_t list.
  *@head: the head of the linked list
  */

void free_listint(listint_t *head)
{
	listint_t *current_node = head;
	listint_t *next;

	while (current_node != NULL)
	{

		/*next pointer points to the next node in the list*/
		next = current_node->next;

		free(current_node);
		current_node = next;
	}


}
