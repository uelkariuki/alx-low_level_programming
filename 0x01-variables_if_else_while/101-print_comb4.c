#include <stdio.h>

/**
  * main - prints all possible different combinations of three digits
  *
  *Return: 0
  */
int main(void)
{
	/*Initialize all three digits*/
	int i, j, k;

	/* for loop for first,second,third digit*/
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				/*add commas and space after digits*/
				if (i != 7 || j != 8 || k != 9)
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
