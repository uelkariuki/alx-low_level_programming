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
	const char *arg, *p;

	if (argc == 1)
	{
		printf("0\n");
		return (0);


	}



	for (i = 1; i < argc; i++)
	{

		arg = argv[i];

		for (p = arg; *p; p++)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(arg);

	}

	printf("%d\n", sum);
	return (0);

}

