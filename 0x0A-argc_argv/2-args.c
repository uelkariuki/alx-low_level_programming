#include <stdio.h>

#define UNUSED(argc) (void)(argc)
/**
  *main- program that prints all arguments it receives.
  *@argc: number of command line arguments
  *@argv: an array containing the program command line arguments
  *Return: 0
  */


int main(int argc, char *argv[])
{
	int i;

	UNUSED(argc);

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);





}









