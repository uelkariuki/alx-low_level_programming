#include "main.h"

/**
  *cap_string- function that capitalizes all words of a string
  *Return: string
  *@str: string to be capitalized
  */

char *cap_string(char *str)
{
	int i = 0;
	/*integer declared to capitalize text where 1 is true and 0 is false*/
	int capitaltext = 1;

	while (str[i] != '\0')
	{

		if (capitaltext && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		/*check for word separators*/
		if (str[i] == ' ' || str[i] == '\n' || str[i] == ',' || str[i] == '\t'
				|| str[i] == '.' || str[i] == '!' || str[i] == '?' ||
				str[i] == '"' || str[i] == '(' || str[i] == ')' ||
				str[i] == '{' || str[i] == '}' || str[i] == ';'
				|| str[i] == '/')
		{
			capitaltext = 1;
		}
		else
		{
			capitaltext = 0;
		}
		i++;
	}

	return (str);

}
