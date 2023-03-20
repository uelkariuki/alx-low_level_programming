#include "dog.h"
#include <stdlib.h>

/**
  *free_dog- Write a function that frees dogs.
  *@d: name of the struct
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);

	}
}
