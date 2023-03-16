#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  *main- a program that multiplies two numbers.
  *@argc:number of command line arguments
  *@argv:an array containing the program command line arguments
  *Return: multiplied number
  */

int main(int argc, char *argv[])
{
	float result, num1, num2;
	int i, j;
	char *arg;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);

	}

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		for (j = 0; arg[j]; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result =  num1 * num2;
	printf("%f\n", result);

	return (0);
}
