#include "main.h"
#include <stdio.h>

/**
  *print_buffer- function that prints a buffer
  *@b:character pointer of variable b
  *@size:size of the buffer
  */


void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);
		for (j = i; j < i + 10 && j < size; j += 2)
		{
			printf("%02x%02x ", b[j] & 0xff, (j + 1 < size) ? b[j + 1] & 0xff : 0);
		}
		for (j = i; j < i + 10 && j < size; j++)
		{
			printf("%c", (b[j] >= 32 && b[j] <= 126) ? b[j] : '.');
		}
		printf("\n");
	}
}

