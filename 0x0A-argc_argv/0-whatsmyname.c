#include <stdio.h>


/**
  *main- program that prints its name, followed by a new line.
  *@argc: size of argv array or the number of commannd line arguments
  *@argv: array of size argc & an array containing the command line arguments
  *Return: 0;
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}

	return (0);


}

