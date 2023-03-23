#include "variadic_functions.h"


/**
  *print_all- function that prints anything.
  *@format: a list of types of arguments passed to the function
  *
  */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char c;
	float f;
	char *s;
	va_list args;

	va_start(args, format);
	while (format && format[j])
	{
		switch (format[j])
		{
			case 's':
				 s = va_arg(args, char *);
				if (s != NULL)
					printf("%s", s);
				else
					printf("(nil)");
				break;
			case 'c':
				c  =  va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i  = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			default:
				break;
		}
		j++;
		if (format[j] == 'c' || format[j] == 'i' ||
				format[j] == 'f' || format[j] == 's')
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
