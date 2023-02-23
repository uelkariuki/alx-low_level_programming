#include <stdio.h>

/**
  *main- finds and prints the first 98 Fibonacci numbers
  *      starting with 1 and 2, followed by a new line.
  *
  *Return: 0
  */

int main(void)
{
	long int first = 1;
	long int second = 2;
	long int next;
	long int  i;

	printf("%ld, %ld", first, second);

	for (i = 0 ; i <= 98; i++)
	{
		next = first + second;
		printf(", %ld", next);

		first = second;
		second = next;
	}

	printf("\n");
	return (0);

}



