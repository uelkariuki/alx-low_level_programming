#include "main.h"

#include "0-strcat.c"
#include "2-strlen.c"
#include "9-strcpy.c"
#include "3-puts.c"


/**
  *str_concat- function that concatenates two strings.
  *@s1: destination string to be concatenated
  *@s2: source string to be concatenated to destination string
  *
  *Return: pointer to allocated space in memory having the concatenated string
  */

char *str_concat(char *s1, char *s2)
{
	char *p;

	if (NULL)
	{
		_puts("");

	}

	p = (char *) malloc(_strlen(s1) + 1);

	if (p == NULL)
	{
		return (NULL);

	}
	else
	{
		_strcpy(p, s1);
		_strcat(p, s2);

	}
	return (p);


}
