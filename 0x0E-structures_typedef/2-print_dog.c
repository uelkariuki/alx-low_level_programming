#include <stdio.h>
#include "dog.h"
/**
  *print_dog- function that prints a struct dog
  *@d: name of the struct
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)\n");
		return;
	}
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);

	}
	else
	{
		printf("Name: (nil)\n");


	}
	if (d->age != 0.0)
	{
		printf("Age: %f\n", d->age);

	}
	else
	{
		printf("(nil)\n");

	}
	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);

	}
	else
	{
		printf("(nil)\n");

	}

}