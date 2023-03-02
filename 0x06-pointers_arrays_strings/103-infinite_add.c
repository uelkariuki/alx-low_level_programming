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
	/* Find the lengths of the input numbers*/
	int len1, idx2, idx1;
	int len2;
	int carry = 0;
	int idxr = 0;
	int digit, digit1, digit2, i, j, sum;
	char temp;

	len1 = 0;

	while (n1[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;

	while (n2[len2] != '\0')
	{
		len2++;
	}
	/* Add the numbers digit by digit, starting from the least significant digit*/
	carry = 0;
	idx1 = len1 - 1;
	idx2 = len2 - 1;
	idxr = 0;

	while (idx1 >= 0 || idx2 >= 0)
	{
		digit1 = (idx1 >= 0) ? (n1[idx1] - '0') : 0;
		digit2 = (idx2 >= 0) ? (n2[idx2] - '0') : 0;
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		digit = sum % 10;
		if (idxr < size_r - 1)
		{
			r[idxr] = digit + '0';
			idxr++;
		}
		else
		{
			return (0);  /* Result cannot be stored in r*/
		}

		idx1--;
		idx2--;
	}
	/* Handle any remaining carry*/

	if (carry > 0 && idxr < size_r - 1)
	{
		r[idxr] = carry + '0';
		idxr++;
	}
	else if (carry > 0)
	{
		return (0); /* Result cannot be stored in r*/
	}

	/* Add a null terminator to the result string*/
	r[idxr] = '\0';

	/* Reverse the result string*/
	i = 0;
	j = idxr - 1;
	while (i < j)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
		i++;
		j--;
	}
	/*Return a pointer to the result string*/

	return (r);
}
