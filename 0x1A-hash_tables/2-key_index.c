#include "hash_tables.h"

/**
 * key_index- function that gives you the index of the key
 * @key: is the key
 * @size: the size of the array of the hash table
 * Return: the index at which the key/value pair
 * should be stored in the array of the hash table
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	if (key == NULL)
		return (0);
	if (size == 0)
		return (0);
	hash_value = hash_djb2((const unsigned char *) key);
	index = hash_value % size;
	return (index);
}
