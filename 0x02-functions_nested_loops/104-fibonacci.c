#include <stdio.h>

/**
  *main- finds and prints the first 98 Fibonacci numbers
  *      starting with 1 and 2, followed by a new line.
  *
  *Return: 0
  */

int main(void)
{
	unsigned long int first = 0;
	unsigned long int second = 1;
	unsigned long int next;
	unsigned long int  i;


	for (i = 0 ; i <= 98; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}

		printf("%lu", second);

		next = first + second;
		first = second;
		second = next;
	}

	printf("\n");
	return (0);

}



