#include "main.h"

/**
  *check- function to check from n to base and determine if n is the
  *       right natural number
  *@n: the number we will use to check if (n*n) is equal to base to confirm it
  *    is a natural square root of base
  *@base: number whose square root is being calculated ie 5*5 = 25 , 25 is
  *      the base number
  *Return: the natural square root of the base
 */

int check(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	/*if (n * n < base)*/
	return (check(n + 1, base));

}


/**
  *_sqrt_recursion- function that returns the natural square root of a number
  *
  *@n:the number whose square root is being looked for
  *Return: the natural square root of a number or integer n.
  */

int _sqrt_recursion(int n)
{
	return (check(1, n));

}
