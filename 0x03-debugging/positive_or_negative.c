#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *positive- try
 *.
 *Return:  0
 */

int positive(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/*  function body */
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	return (0);
}
