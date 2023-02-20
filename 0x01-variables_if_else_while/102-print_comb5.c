#include <stdio.h>
/**
  *main - prints all combinations of two two-digit numbers
  *Return: 0
  */
int main(void)
{
	/* initialize / declare  digits */
	int i, j;
	{
		/* for loop for the two two- digit numbers */
		for (i = 0; i < 100; i++)
		{
			for (j = i + 1; j < 100; j++)
			{
				/* use division: first digit, modulus: last digit*/
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');

				/* add commas and spaces*/
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
