#include <stdio.h>

/**
  *main- finds and prints the first 98 Fibonacci numbers
  *      starting with 1 and 2, followed by a new line.
  *
  *Return: 0
  */

int main(void)
{
	unsigned long int first = 1;
	unsigned long int second = 2;
	unsigned long int next;
	unsigned long int  i;

	printf("%lu, %lu", first, second);

	for (i = 1 ; i < 98; i++)
	{
		next = first + second;
		printf(", %lu", next);

		first = second;
		second = next;
	}

	printf("\n");
	return (0);

}



