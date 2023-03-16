#include "main.h"

/**
  *_calloc- function that allocates memory for an array, using malloc.
<<<<<<< HEAD
  *@nmemb: number of elements
  *@size: size of the array
=======
  *@nmemb: number of elements in the array
  *@size: size of the each element in the array
>>>>>>> 1125b0972ebf6d2b438b136d7954cf18a2c93d02
  *Return: pointer to the allocated memory
  */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size  == 0)
	{
		return (NULL);

	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, nmemb * size);
	return (ptr);
<<<<<<< HEAD

=======
>>>>>>> 1125b0972ebf6d2b438b136d7954cf18a2c93d02
}
