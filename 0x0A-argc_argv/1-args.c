#include <stdio.h>
#include "main.h"

#define UNUSED(argv) (void)(argv)
/**
  *main- program that prints the number of arguments passed into it.
  *@argc: size of array argv & number of command line arguments
  *@argv:array containing the program command line arguments
  *Return: 0
  */

int main(int argc, char *argv[])
{
	UNUSED(argv);

	printf("%d\n", argc - 1);

	return (0);


}
