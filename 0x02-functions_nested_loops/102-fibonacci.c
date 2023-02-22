#include <stdio.h>

/**
  *main- entry point
  *
  *Return: 0
  */
int main(void)
{
	/* number of fibonacci numbers to print */
	int n = 50;

	long int i, a = 1, b = 2, c;

	/*print the first two numbers*/
	printf("%ld, %ld", a, b);
	for (i = 3; i <= n; i++)
	{
		c = a + b;
		/*prints the next number*/
		printf(", %ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
