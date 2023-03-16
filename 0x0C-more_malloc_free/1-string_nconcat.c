#include "main.h"
#include <string.h>


/**
  *string_nconcat- function that concatenates two strings.
  *
  *@s1: destination string to be concanated
  *@s2: source string two to be concanated
  *@n: number of bytes to be copied for the concantnated string
  *Return: pointer having the concantenated string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	size_t s1_len, s2_len;

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	if (n >= s2_len)
	{
		n = s2_len;
	}

	str = malloc(s1_len + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (n >= s2_len)
	{
		n = s2_len;
	}

	memcpy(str, s1, n);
	memcpy(str + s1_len, s2, n);

	str[s1_len + n] = '\0';
	return (str);

}
