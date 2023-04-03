#include "lists.h"

/**
  *add_nodeint-function to add a new node at the beginning of listint_t list.
  *@head: the head of the linked list node
  *@n: the integer
  *Return: the address of the new element
  */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a_new_node;

	a_new_node = malloc(sizeof(listint_t));

	if (a_new_node == NULL)
	{
		return (NULL);
	}


	/* initializing the new (a_new_node) node*/
	a_new_node->n = n;
	a_new_node->next = *head;

	/*head point to the new initialized node*/
	*head = a_new_node;


	return (a_new_node);


}
