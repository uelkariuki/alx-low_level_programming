#include <stdlib.h>
#include "dog.h"

/**
  *init_dog - function that initialize a variable of type struct dog
  *@name:the name of struct
  *@age: age of dog in struct
  *@owner: owner of dog in struct
  *@d: name of struct
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}

