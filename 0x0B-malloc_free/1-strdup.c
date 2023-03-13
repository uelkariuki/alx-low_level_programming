#include "main.h"

#include "2-strlen.c"
#include "9-strcpy.c"


/**
  *_strdup- function that returns a pointer to a newly allocated space in
  *memory, which contains a copy of the string given as a parameter
  *@str: string to be duplicated
  *Return: a pointer to the duplicated string
  */

char *_strdup(char *str)
{
	char *d;

	if (str == NULL)
	{
		return (NULL);
	}

	d = (char *) malloc(_strlen(str) + 1);

	if (d == NULL)
	{
		return (NULL);

	}
	else
	{
		_strcpy(d, str);


	}
	return (d);

}
