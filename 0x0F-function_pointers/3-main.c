#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main- the main function
  *@argc: number of command line arguments
  *@argv: array containing the program command line arguments
  *Return: result
  */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char op = argv[2][0];
	int result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		return (99);
	}
	result = func(a, b);
	printf("%d\n", result);
	return (0);
}
