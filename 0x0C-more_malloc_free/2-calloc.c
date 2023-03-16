#include "main.h"

/**
  *_calloc- function that allocates memory for an array, using malloc.
  *@nmemb: number of elements in the array
  *@size: size of the each element in the array
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
}
