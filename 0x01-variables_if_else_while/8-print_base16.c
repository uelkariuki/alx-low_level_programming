#include <stdio.h>

/**
  *main- entry point
  *
  *Return: 0
  */

int main(void)
{
	/* to iterate from number 0 to 9*/
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	/* to iterate from lowercase a to f */
	for (i = 10; i < 16; i++)
	{
		putchar(i - 10 + 'a');

	}
	putchar('\n');
	return (0);






}
