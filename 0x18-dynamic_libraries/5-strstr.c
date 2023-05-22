#include "main.h"

/**
  *_strstr- function that locates a substring.
  *
  *@needle: string to be searched for
  *@haystack: the string to be searched in
  *Return: a pointer to the beginning of the located
  *       substring, or NULL if the substring is not found.
  */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			/*if full combination of needle is not found in*/
			/*haystack break out of loop and start all over again*/
			if (haystack[i + j] != needle[j])
			{
				break;
			}

		}
		/*If whole needle substring is found return pointer to*/
		/*start of substring within haystack*/
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}

	}
	/*if needle not found in haystack return NULL*/
	return (NULL);


}

