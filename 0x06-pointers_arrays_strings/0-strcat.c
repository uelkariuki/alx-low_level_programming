#include "main.h"

/**
  *_strcat- function that concatenates two strings.
  *@dest: destination string
  *@src: source string
  *Return: dest
  */

char *_strcat(char *dest, char *src)
{
	/*assign a pointer to point at the beginning of dest string*/
	char *p = dest;

	while (*p != '\0')
	{
		/*loop through the next character in the dest string*/
		p++;
	}

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	/*add a terminating null character at the end of*/
	/*concanated destination string*/
	*p = '\0';

	return (dest);

}
