#include "main.h"

/**
  *leet-function that encodes a string into 1337
  *@str: string to be encoded
  *Return: encoded string
  */


char *leet(char *str)
{
	int i, j;

	char leet[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = replace[j];


			}


		}




	}
	return (str);




}
