#include <stdio.h>
#include <stdlib.h>

/**
  *main- program that prints the opcodes of its own main function.
  *@argc: the number of command line arguments
  *@argv: array containing the program commandline arguments
  *Return: the opcodes(machine code) of main function
  */

int main(int argc, char *argv[])
{
	int i, number_of_bytes;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)&main;

	if (ptr != NULL)
	{
		for (i = 0; i < number_of_bytes; i++)
		{
			printf("%02hhx ", ptr[i]);

		}

	}
	return (0);

}

