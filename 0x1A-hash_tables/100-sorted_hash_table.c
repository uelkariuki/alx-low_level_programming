#include "hash_tables.h"

/**
 * shash_table_create- function that creates a shash table
 * @size: the size of the array
 * Return: a pointer to the newly created shash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int q;

	if (size == 0)
		return (NULL);
	table = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = (shash_node_t **)calloc(table->size,
			sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (q = 0; q < size; q++)
	{
		table->array[q] = NULL;


	}
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * shash_table_set- function to ensure The key/value pair should
 * be inserted in the sorted list at the right place
 * @ht: is the hash table
 * @key: is the key and key can not be an empty string
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 *
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current;
	unsigned long int index;

	new_node = (shash_node_t *)malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	new_node->sprev = NULL;
	new_node->snext = NULL;

	current = ht->shead;/*find correct spot to insert in list*/
	while(current != NULL && strcmp(key, current->key) > 0)
		current = current->snext;
	if (current == NULL) /*insert at the end of list*/
	{
		if (ht->stail != NULL)
		{
			ht->stail->next = new_node;
			new_node->sprev = ht->stail;
		}
		ht->stail = new_node;
		if (ht->shead == NULL)
			ht->shead = new_node;
	}
	else /* insert before the current node in the list*/
	{
		new_node->sprev = current->sprev;
		new_node->snext = current;
		if (current->sprev != NULL)
			current->sprev->snext = new_node;
		else
			ht->shead = new_node;
		current->sprev = new_node;
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}

/**
 * shash_table_get- a function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *item;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((unsigned char *) key, ht->size);
	item = ht->array[index];
	if (index >= ht->size)/* the index is not in the hash table*/
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

/**
 * shash_table_print- a function that prints a hash table
 * using the sorted linked list
 * @ht: is the hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *the_node = ht->shead, *temp;

	if (ht == NULL)
	{
		return;
	}
	/*temp = NULL;*/
	while (the_node != NULL)
	{
		temp = the_node;
		printf("{");
		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			if (temp->snext != NULL)
			{
				printf(", ");
			}
			temp = temp->snext;
		}
		printf("}\n");
		the_node = the_node->next;
	}
}

/**
 * shash_table_print_rev- a function that prints the hash tables
 * key/value pairs in reverse order using the sorted linked list
 * @ht: is the hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *the_node = ht->stail, *temp;
	if (ht == NULL)
		return;
	while (the_node != NULL)
	{
		temp = the_node;
		printf("{");
		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			if (temp->sprev != NULL)
			{
				printf(", ");
			}
			temp = temp->sprev;
		}
		printf("}\n");
		the_node = the_node->sprev;
	}

}

/**
 * shash_table_delete- a function that deletes a hash table
 * @ht: is the hash table
 *
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int q;
	shash_node_t *temp_node, *the_node;

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
	the_node = ht->shead;
	while (the_node != NULL)
	{
		temp_node = the_node;
		the_node = the_node->snext;
		free(temp_node->key);
		free(temp_node->value);
		free(temp_node);
	}
	free(ht);
}
