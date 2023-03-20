#include "dog.h"
#include <stdio.h>

/**
  *new_dog-  function that creates a new dog.
  *@name: name of new dog in struct
  *@age: age of the new dog in struct
  *@owner: owner of the new dog in struct
  *Return: pointer to new_dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	static dog_t newdog;

	if (name == NULL || owner == NULL)
		return (NULL);


	newdog.name = name;
	newdog.age = age;
	newdog.owner = owner;

	return (&newdog);

}
