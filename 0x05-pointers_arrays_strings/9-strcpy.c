#include "main.h"

/**
  **_strcpy- function that copies the string pointed to by src, including
  *the terminating null byte (\0), to the buffer pointed to by dest.
  *@src: source
  *@dest: destinationy
  *Return:the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	char *orig_dest = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (orig_dest);

}
