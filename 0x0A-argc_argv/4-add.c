#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  *main- program that adds positive numbers.
  *@argc: number of command line arguments
  *@argv: array containing program command line arguments
  *Return: 0
  */


int main(int argc, char *argv[])
{
	int i, sum = 0;


	for (i = 1; i < argc; i++)
	{
		if (isalpha(argv[i][0]))
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + atoi(argv[i]);


	}
	printf("%d\n", sum);
	return (0);


}
