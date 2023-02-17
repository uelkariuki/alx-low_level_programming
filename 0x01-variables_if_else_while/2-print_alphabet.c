#include <stdio.h>

/**
  *main - Entry
  *
  *Return: 0
  */
int main(void)
{
	char ch;
	/*print the alpahbet using a loop*/

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	/* adding a newline*/
	putchar('\n');

	return (0);
}
