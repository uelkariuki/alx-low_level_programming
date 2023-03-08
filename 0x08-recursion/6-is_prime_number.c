#include "main.h"

/*used the function from prevois task to implement sqaure root*/
#include "5-sqrt_recursion.c"

/**
  *is_prime_number_helperfunction- function to help check if n is prime number
  *@n: the number to check if it is a prime number
  *@divisor: parameter to be checked if it is a factor or divisor of n
  *Return: criteria to check if n is a prime number or not
  */

int is_prime_number_helperfunction(int n, int divisor)
{
	/*2 is the lowest prime number anything below isn't a prime number*/
	if (n <= 1)
		return (0);
	if (divisor > _sqrt_recursion(n))
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_number_helperfunction(n, divisor + 1));


}

/**
  *is_prime_number- function that returns 1 if the input integer is
  *                 a prime number
  *@n: integer to be checked if it is a prime number
  *Return: 1 if the input integer is a prime number, otherwise return 0.
  */

int is_prime_number(int n)
{
	return (is_prime_number_helperfunction(n, 2));

}
