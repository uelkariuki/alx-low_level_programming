#include "main.h"

/**
  *_memcpy- function that copies memory area.
  *@n: number of bytes to be copied from memory area
  *@src: source
  *@dest: destination
  *Return:a pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;
	char *psrc = src;

	while (n--)
	{
		*pdest++ = *psrc++;

	}
	return (dest);


}
