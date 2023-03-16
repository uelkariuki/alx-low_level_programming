#include "main.h"


/**
  *_realloc- function that reallocates a memory block using malloc and free
  *@ptr: is a pointer to the memory previously allocated with
  *       a call to malloc: malloc(old_size)
  *@old_size: the size, in bytes, of the allocated space for ptr
  *@new_size: the new size, in bytes of the new memory block
  *Return: pointer to the reallocated memory block
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	int num_of_bytes_to_copy;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (ptr == NULL)
	{
		return (new_ptr);
	}
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		num_of_bytes_to_copy = old_size;
	}
	else if (new_size < old_size)
	{
		num_of_bytes_to_copy = new_size;
	}

	memcpy(new_ptr, ptr, num_of_bytes_to_copy);
	free(ptr);
	return (new_ptr);
}
