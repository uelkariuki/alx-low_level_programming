#include "3-calc.h"

/**
  *op_add- function that adds two integers
  *@a: integer a
  *@b: integer b
  *Return:sum of a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub- function that substracts two integers
  *@a: integer a
  *@b: integer b
  *Return: difference of a and b
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul- function that finds the product of a and b
  *@a: integer a
  *@b: integer b
  *Return:the product of a and b
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div- function that returns the result of the division of a by b.
  *@a: integer a
  *@b: integer b
  *Return: result of the division of a by b.
  */

int op_div(int a, int b)
{
	return (a / b);
}

/**
  *op_mod- function that returns the remainder of the division of a by b.
  *@a: integer a
  *@b: integer b
  *Return:the remainder of the division of a by b
  */
int op_mod(int a, int b)
{
	return (a % b);
}
