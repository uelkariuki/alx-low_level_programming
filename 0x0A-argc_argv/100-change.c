#include <stdio.h>
#include <stdlib.h>

/**
  *calculate_coins- calculate the number of coins
  *@coin_value: value of coins ie coin value of 7 - 25 cents is 175
  *@cents: number of cents to be converted to coins
  *Return: the number of coins
  */

int calculate_coins(int coin_value, int cents)
{
	int num_coins = 0;

	while (cents >= coin_value)
	{
		num_coins++;
		cents = cents - coin_value;

	}
	return (num_coins);

}
/**
  *main- program that prints the minimum number of
  *      coins to make change for an amount of money.
  *@argc: number of command line arguments
  *@argv: array containing the  program command line argumentse
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents <=  0)
	{
		printf("0\n");
		return (0);
	}

	coins = coins + calculate_coins(25, cents);
	cents = cents - (coins * 25);

	coins = coins + calculate_coins(10, cents);
	cents = cents - (coins * 10);

	coins = coins + calculate_coins(5, cents);
	cents = cents - (coins * 5);

	coins = coins + calculate_coins(2, cents);
	cents = cents - (coins * 2);

	coins = coins + calculate_coins(1, cents);

	printf("%d\n", coins);
	return (0);

}
