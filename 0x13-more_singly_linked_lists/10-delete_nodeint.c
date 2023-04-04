#include "lists.h"

/**
  *delete_nodeint_at_index- function that deletes the node at index index of
  * a listint_t linked list.
  *@head: pointer to a head pointer of a linked list
  *@index: index of the node that should be deleted. Index starts at 0
  *Return: 1 if it succeeded, -1 if it failed
  */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *previous_node, *current_node;
	unsigned int w;

	if (*head == NULL)
	{
		return (1);

	}
	if (index == 0) /* head is the one to be deleted*/
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	previous_node = *head;
	current_node = previous_node->next;

	w = 1;

	while (current_node != NULL && w < index)
	{
		previous_node = current_node;
		current_node = current_node->next;
		w++;

	}
	if (current_node == NULL)
	{
		return (-1);

	}

	previous_node->next = current_node->next;
	/* delete the node that is to be deleted*/
	free(current_node);

	return (0);


}
