#include <stdio.h>

/**
  *main- finds and prints the first 98 Fibonacci numbers
  *      starting with 1 and 2, followed by a new line.
  *
  *Return: 0
  */

int main(void)
{
	unsigned int first = 1;
	unsigned int second = 2;
	unsigned int next;
	unsigned int  i;

	printf("%u, %u", first, second);

	for (i = 1 ; i < 98; i++)
	{
		next = first + second;
		printf(", %u", next);

		first = second;
		second = next;
	}

	printf("\n");
	return (0);

}



