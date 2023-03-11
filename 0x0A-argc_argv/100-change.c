#include <stdio.h>
#include <stdlib.h>

/**
  *main- program that prints the minimum number of
  *      coins to make change for an amount of money.
  *@argc: number of command line arguments
  *@argv: array containing the  program command line argumentse
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int num, a, result = 0;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (a = 0; a < 5 && num >= 0; a++)
	{
		while (num >= coins[a])
		{
			result++;
			num = num - coins[a];

		}

	}


	printf("%d\n", result);
	return (0);

}
