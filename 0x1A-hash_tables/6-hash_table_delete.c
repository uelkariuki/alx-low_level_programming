#include "hash_tables.h"

/**
 * hash_table_delete- a function that deletes a hash table
 * @ht: is the hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int q;
	hash_node_t *temp_node, *the_node;

	if (ht == NULL)
		return;

	for (q = 0; q < ht->size; q++)
	{
		the_node = ht->array[q];

		while (the_node != NULL)
		{
			temp_node = the_node;
			the_node = the_node->next;
			free(temp_node->key);
			free(temp_node->value);
			free(temp_node);

		}



	}
	free(ht->array);
	free(ht);







}
