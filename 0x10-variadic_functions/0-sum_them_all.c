#include "variadic_functions.h"
#include <stdarg.h>

/**
  *sum_them_all- a function that returns the sum of all its parameters
  *@n: constant number of parameters
  *Return: sum of all the paramaters of the function
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list sl;
	unsigned int i, sum = 0;

	va_start(sl, n); /* initialize the arguments*/

	if (n == 0)
	{
		return (0);

	}

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(sl, int); /* get the next argument value*/

	}
	va_end(sl); /* clean up*/
	return (sum);

}
