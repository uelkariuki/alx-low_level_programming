#include <stdio.h>

/**
  *main- entry point
  *
  *Return: 0
  */

int main(void)
{
	int i;
	/* using a for loop to iterate through*/
	 /*the ASCII char codes for lowercase letters */

	for (i = 'z'; i >= 'a'; i--)

	{
		putchar(i);

	}

	putchar('\n');
	return (0);
}
