#include <stdio.h>

/**
  *main -entry
  *
  *Return: 0
  */

int main(void)
{

	/*initialize variable letter to a */
	char letter = 'a';
	/* using a while loop to iterate over all alphabet letters*/
	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{ putchar(letter);

		}
		letter++;

	}
	putchar('\n');
	return (0);


}
