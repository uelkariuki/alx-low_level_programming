#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  *new_dog-  function that creates a new dog.
  *@name: name of new dog in struct
  *@age: age of the new dog in struct
  *@owner: owner of the new dog in struct
  *Return: pointer to new_dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL || *name == '\0' || age == 0.0)
	{
		return (NULL);

	}

	if (newdog == NULL)
	{
		return (NULL);

	}

	newdog->name = strdup(name);

	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->age = age;

	newdog->owner = strdup(owner);

	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	return (newdog);
}
