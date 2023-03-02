#include "main.h"

/**
  *rot13- function that encodes a string using rot13
  *@str: string to be encoded
  *Return: encodes string
  */

char *rot13(char *str)
{
	char *p = str;

	while ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z'))
	{
		if ((*p >= 'm' && *p <= 'z') || (*p >= 'M' && *p <= 'Z'))
		{
			*p = *p - 13;
		}

		{
			*p = *p + 13;
		}

		p++;
	}
	return (str);

}
