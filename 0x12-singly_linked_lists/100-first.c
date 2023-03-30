#include "lists.h"

/**
  *before_printf- function to print before main function is executed
  *
  */

void before_printf(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}

/**
  *imain- entry point
  *Return: 0
  */
int imain(void)
{
	char *str = "%s";

	printf("%s\n", str);
	return (0);

}
