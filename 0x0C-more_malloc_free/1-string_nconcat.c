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
	unsigned int len1 = 0, i, j, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;

	}
	while (s2[len2] != '\0')
	{
		len2++;

	}
	if (n >= len2) /* Truncate s2 if necessary */
		n = len2;
	str = malloc((len1 + n  + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j]  = '\0';
	return (str);
}
