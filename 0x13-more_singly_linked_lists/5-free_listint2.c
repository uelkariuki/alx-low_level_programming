#include "lists.h"

/**
  *free_listint2-  function that frees a listint_t list.
  *@head: the head of the linked list
  */


void free_listint2(listint_t **head)
{
	listint_t *current_node = *head;
	listint_t *temp;

	if (*head == NULL)/* here it checks if head pointer is null*/
	{
		free(head);
		return;
	}

	while (current_node != NULL)
	{
		temp = current_node;
		current_node = current_node->next;

		free(temp);

	}
	*head = NULL;

}
