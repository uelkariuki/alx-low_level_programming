#include "main.h"
#include <stdlib.h>


/**
  *create_array- creates an array of chars,initializes it with a specific char
  *@c: character value to initialize the array with
  *@size: size of the array to be created
  *Return: a pointer to the array, or NULL if it fails
  */




char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr;


	if (size == 0)
	{
		return (NULL);


	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);

	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;

	}

	return (arr);

}
