#include "main.h"
#include <stdio.h>

/**
  *print_buffer- function that prints a buffer
  *@b:character pointer of variable b
  *@size:size of the buffer
  */


void print_buffer(char *b, int size)
{
	int byt, indx;

	for (byt = 0; byt < size; byt += 10)
	{
		printf("%08x: ", byt);

		for (indx = 0; indx < 10; indx++)
		{
			if ((indx + byt) >= size)
				printf("  ");

			else
				printf("%02x", *(b + indx + byt));

			if ((indx % 2) != 0 && indx != 0)
				printf(" ");
		}

		for (indx = 0; indx < 10; indx++)
		{
			if ((indx + byt) >= size)
				break;

			else if (*(b + indx + byt) >= 31 &&
				 *(b + indx + byt) <= 126)
				printf("%c", *(b + indx + byt));

			else
				printf(".");
		}

		if (byt >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
