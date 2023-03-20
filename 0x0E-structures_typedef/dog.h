#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H

/**
  *struct dog- new type struct dog with the following element
  *@name: the name
  *@age: the age
  *@owner: the owners
  */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
