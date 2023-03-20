#include <stdio.h>
#include "dog.h"
/**
  *print_dog- function that prints a struct dog
  *@d: name of the struct
  */

void print_dog(struct dog *d)
{
	if (d->age == 0.0)
	{
		printf("Age: (nil)");

	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");

	}
	if (d == NULL)
	{
		printf("\n");

	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");

	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);



}
