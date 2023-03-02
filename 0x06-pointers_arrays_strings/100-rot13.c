#include "main.h"

/**
  *rot13- function that encodes a string using rot13
  *@str: string to be encoded
  *Return: encodes string
  */

char *rot13(char *str)
{
	char *p = str;

	while (*p != '\0')
	{

		if ((*p >= 'A' && *p <= 'M') || (*p >= 'a' && *p <= 'm'))
		{
			*p += 13;
		}

		else if ((*p >= 'N' && *p <= 'Z') || (*p >= 'n' && *p <= 'z'))
		{
			*p -= 13;
		}


		p++;
	}
	return (str);

}
