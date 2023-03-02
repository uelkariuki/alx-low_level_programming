#include "main.h"

/**
  *infinite_add-function that adds two numbers.
  *@size_r:buffer size
  *@n1:number 1
  *@n2:number 2
  *@r: buffer that the function will use to store the result
  *Return:pointer to the result
  */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2, i, digit1, digit2, maxLen, carry = 0, sum = 0;

	while (n1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;

	while (n2[len2] != '\0')
	{
		len2++;
	}
	maxLen = len1 > len2 ? len1 : len2;

	if (maxLen + 1 > size_r)
	{ /* check if result can be stored in r*/
		return (0);
	}

	for (i = 0; i < maxLen; i++)
	{
		digit1 = i < len1 ? n1[len1 - 1 - i] - '0' : 0; /* get digit from n1*/
		digit2 = i < len2 ? n2[len2 - 1 - i] - '0' : 0; /* get digit from n2*/
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		sum %= 10;
		r[maxLen - 1 - i] = sum + '0';
	}
	if (carry)
	{
		if (maxLen + 1 > size_r)
		{ /* check if result can be stored in r*/
			return (0);
		}
		r[0] = carry + '0';
		r[maxLen] = '\0';
		return (r);
	}
	r[maxLen] = '\0';
	return (r);
}

