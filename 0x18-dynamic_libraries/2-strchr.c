#include "main.h"

/**
  *_strchr- function that locates a character in a string
  *@s: string that will be used in the search
  *@c: character that is been looked for
  *Return: pointer to the first occurrence of the character c in the
  *string s, or NULL if the character is not found
  *NULL- to be returned if character is not found
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;

	}
	/*checking for the terminating null character so that it isn't */
	  /*missed in the search*/

	if (*s == c)
	{
		return (s);

	}
	return (NULL);

}
