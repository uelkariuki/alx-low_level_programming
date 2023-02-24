#include <stdio.h>

/**
  *main- entry point
  *
  *Return: o
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0)
		{
			printf(" Fizz");

		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");

		}
		else if (i % 15 == 0)
		{
			printf(" Fizzbuzz");

		}
		else
		{
			printf(" %d", i);

		}


	}
	printf("\n");
	return (0);

}


