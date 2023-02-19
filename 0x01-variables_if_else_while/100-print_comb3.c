#include <stdio.h>

/**
  *main -  prints all possible different combinations of two digits
  *
  *Return: 0
  */
int main(void)
{
	/* initialize digits */
	int i, j;

	/* use a for loop to add first digit */
	for (i = 0; i < 10; i++)
	{
		/* use a for loop to add second digit */
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			/* to input commas and space after digits */
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}



		}

	}
	return (0);

}
