#include "hash_tables.h"

/**
 * hash_table_print- a function that prints a hash table
 * @ht: is the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int q;
	int flag = 0;
	hash_node_t *the_node;


	if (ht == NULL)
	{
		return;

	}

	printf("{");

	for (q = 0; q < ht->size; q++)
	{
		the_node = ht->array[q];

		while (the_node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", the_node->key, the_node->value);

			the_node = the_node->next;
			flag = 1;
		}

	}
	printf("}\n");
}
