#include "main.h"

/**
  *get_endianness- function that checks the endianness
  *Return: 0 if big endian, 1 if little endian
  */


int get_endianness(void)
{
	unsigned int store_int = 0x23456789;
	char *point_int = (char *) &store_int;

	if (*point_int == 0x23)
	{
		return (0);

	}
	else
	{
		return (1);
	}

}
