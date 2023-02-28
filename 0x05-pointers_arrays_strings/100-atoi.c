#include "main.h"

/**
  *_atoi- function that convert a string to an integer.
  *@s:pointer to be converted to integer
  *Return: integer
  */

int _atoi(char *s)
{
	int j = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[j])
	{
		if (s[j] == '-')
		{
			min *= -1;
		}

		while (s[j] >= '0' && s[j] <= '9')
		{
			isi = 1;
			ni = (ni * 10) + (s[j] - '0');
			j++;
		}

		if (isi == 1)
		{
			break;
		}

		j++;
	}

	ni *= min;
	return (ni);
}

