#include "lists.h"

/**
  *reverse_listint- function that reverses a listint_t linked list.
  *@head: a pointer to a head pointer
  *Return: a pointer to the first node of the reversed list
  */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *next, *temp;

	current = *head;
	next = current->next;
	current->next = NULL;

	while (next != NULL)
	{
		temp = next->next;
		next->next = current;
		current = next;
		next = temp;

	}
	*head = current;

	return (current);

}
