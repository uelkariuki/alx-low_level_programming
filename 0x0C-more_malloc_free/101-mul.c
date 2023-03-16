#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *main- a program that multiplies two numbers.
  *@argc:number of command line arguments
  *@argv:an array containing the program command line arguments
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);

	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 <= 0 || num2 <= 0)
	{
		printf("Error\n");
		exit(98);
	}

	result =  num1 * num2;
	printf("%d\n", result);

	return (0);


}
