#include <stdio.h>

/**
  *main -Entry
  *
  *Return:  0
  */
int main(void)
{
	char ch;

	/*print the lowercase with a loop*/
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	/*prnt the uppercase letters using a loop*/

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	/*print a newline*/
	putchar('\n');

	return (0);

}

