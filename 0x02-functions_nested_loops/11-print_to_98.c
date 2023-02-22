#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 */


void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d\n", n);
		return;
	}
	printf("%d", n);
	if (n < 98)
	{
		for (i = n + 1; i <= 98; i++)
	{
		printf(", %d", i);
	}
	}
	else
	{
		for (i = n - 1; i >= 98; i--)
	{
		printf(", %d", i);
	}
	}
	printf("\n");
}
