#include <stdio.h>

/**
  *main- finds and prints the first 98 Fibonacci numbers
  *      starting with 1 and 2, followed by a new line.
  *
  *Return: 0
  */

int main(void)
{
	int first = 1;
	int second = 2;
	int next;
	int  i;

	printf("%d, %d", first, second);

	for (i = 3; i < 98; i++)
	{
		next = first + second;
		printf(", %d", next);

		first = second;
		second = next;
	}

	printf("\n");
	return (0);

}



