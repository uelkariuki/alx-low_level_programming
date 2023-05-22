#include "main.h"


/**
  **_strncat- function that concatenates two strings.
  *@dest: destination string
  *@src: source string
  *@n: number of bytes allowed from source
  *Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;
	int dest_len = 0;

	while (*dest != '\0')
	{
		dest_len++;
		dest++;
	}
	while (*src != '\0' && n--)
	{
		*(dest++) = *(src++);

	}
	if (dest_len + n >= 0)
	{
		*dest = '\0';

	}
	return (dest_start);

}

