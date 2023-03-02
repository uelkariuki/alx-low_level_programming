#include "main.h"

/**
  *rot13- function that encodes a string using rot13
  *@str: string to be encoded
  *Return: encodes string
  */

char *rot13(char *str)
{
	int i = 0;

	while (str[i])
	{
		while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			if ((str[i] >= 'm' && str[i] <= 'z') || (str[i] >= 'M' && str[i] <= 'Z'))
			{
				str[i] -= 13;
				break;
			}
			{
				str[i] += 13;
				break;
			}
			i++;

		}


	}
	return (str);

}
