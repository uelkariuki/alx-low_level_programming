#include "main.h"
#include <string.h>


/**
  *string_nconcat- function that concatenates two strings.*
  *@s1: destination string to be concanated
  *@s2: source string two to be concanated
  *@n: number of bytes to be copied for the concantnated string
  *Return: pointer having the concantenated string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= s2_len) /* Truncate s2 if necessary */
	{
		n = s2_len;
	}
	else
	{
		s2_len = n;

	}
	if (n == 0)
	{
		str = malloc(s1_len + 1);
		if (str == NULL)
			return (NULL);
		memcpy(str, s1,  s1_len + 1);
		return (str);
	}

	str = malloc(s1_len + n  + 1);
	if (str == NULL)
		return (NULL);
	memcpy(str, s1, s1_len);
	memcpy(str + s1_len, s2, n);
	str[s1_len + n] = '\0';
	return (str);
}