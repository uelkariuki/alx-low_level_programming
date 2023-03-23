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
	int (*address_main)(int, char **) = main;
	unsigned char current_opcode;

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
	for (i = 0; i < number_of_bytes; i++)
	{
		current_opcode = *(unsigned char *)address_main;
		printf("%.2x", current_opcode);

		if (i == number_of_bytes - 1)
			continue;
		printf(" ");
		address_main++;
	}
	printf("\n");
	return (0);

}

