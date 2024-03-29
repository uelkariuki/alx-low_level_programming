#include "hash_tables.h"

/**
 * hash_table_set- function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key and key can not be an empty string
 * @value: is the value associated with the key
 * value must be duplicated, value can be an empty string
 * In case of collision add the new node at the beginning of the list
 * Return: 1 if it succeeded, 0 otherwise
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp, *the_new_node;

	if (value == NULL || ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	/* Because of collision, add new_node at start of the list*/
	the_new_node = malloc(sizeof(hash_node_t));
	if (the_new_node == NULL)
		return (0);
	the_new_node->key = strdup(key);
	the_new_node->value = strdup(value);
	if (the_new_node->key == NULL || the_new_node->value == NULL)
	{
		free(the_new_node->key);
		free(the_new_node->value);
		free(the_new_node);
		return (0);
	}
	the_new_node->next = ht->array[index];
	ht->array[index] = the_new_node;
	return (1);
}
