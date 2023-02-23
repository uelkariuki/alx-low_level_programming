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

	printf("%li, %li", first, second);

	for (i = 3 ; i <= 98; i++)
	{
		next = first + second;
		printf(", %li", next);

		first = second;
		second = next;
	}

	printf("\n");
	return (0);

}



