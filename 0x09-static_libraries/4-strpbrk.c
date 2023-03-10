#include "main.h"

/**
  *_strpbrk- function that searches a string for any of a set of bytes.
  *@s: string to be searched
  *@accept: string that contains the accepted bytes
  *Return: pointer to the byte in s that matches one of the
  *bytes in accept, or NULL if no such byte is found
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	/*iterate through each charcter in s*/
	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}


		}
		/*move to the next character in s*/
		s++;

	}
	return (NULL);





}
