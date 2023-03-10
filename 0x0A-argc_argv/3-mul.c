#include <stdio.h>
#include <stdlib.h>

/**
  *main- a program that multiplies two numbers.
  *@argc:number of command line arguments
  *@argv:an array containing the program command line arguments
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);

	}


	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);


}
