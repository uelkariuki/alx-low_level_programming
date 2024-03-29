#include "hash_tables.h"

/**
 *hash_table_create- function that creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int q;

	if (size == 0)
		return (NULL);
	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = (hash_node_t **)calloc(table->size,
			sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (q = 0; q < size; q++)
	{
		table->array[q] = NULL;


	}
	return (table);
}
