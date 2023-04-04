#include "lists.h"

/**
  *pop_listint-function that deletes the head node of a listint_t linked
  *list, and returns the head node’s data (n).
  *@head: pointer to a head pointer of a linked list
  *Return: the deleted head node's data
  */


int pop_listint(listint_t **head)
{
	int data_deleted_n;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);

	}

	data_deleted_n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);


	return (data_deleted_n);

}
