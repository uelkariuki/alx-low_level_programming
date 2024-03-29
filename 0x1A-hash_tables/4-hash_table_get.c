#include "hash_tables.h"

/**
 * hash_table_get- a function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item;
	unsigned long int index;


	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((unsigned char *) key, ht->size);
	item = ht->array[index];
	if (index > ht->size)/* the index is not in the hash table*/
	{
		return (NULL);

	}

	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
		{
			return (item->value);
		}
		item = item->next;

	}
	return (NULL);

}
