#include "main.h"
#include <stdlib.h>


#include "0-strcat.c"
#include "2-strlen.c"
#include "1-memcpy.c"


/**
  *str_concat- function that concatenates two strings.
  *@s1: destination string to be concatenated
  *@s2: source string to be concatenated to destination string
  *Return: pointer to allocated space in memory having the concatenated string
  */

char *str_concat(char *s1, char *s2)
{
	char *result;

	size_t s1_len;
	size_t s2_len;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";

	}

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	result = malloc(s1_len + s2_len + 1);

	if (result == NULL)
	{
		return (NULL);


	}
	/*copy s1 to result*/
	/* copy s1_len bytes to result(dest) from s1(source*/
	_memcpy(result, s1, s1_len);

	_memcpy(result + s1_len, s2, s2_len);

	/*adding null teminating character at the end of result*/
	result[s1_len + s2_len] = '\0';
	return (result);
}
