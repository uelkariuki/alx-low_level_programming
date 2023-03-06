#include "main.h"
#include <stdio.h>

/**
  *print_diagsums- prints the sum of the two diagonals
  *of a square matrix of integers
  *
  *@a: is a pointer to the first element of the matrix
  *@size:size of the matrix
  */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	/*sum1:sum of diagonal from top left to bottom right*/
	/*sum2:sum of diagonal from bottom left to top right*/

	for (i = 0; i < size; i++)
	{
		/*add element on diagonal from top left to bottom right*/
		sum1 += *(a + i * size + i);
		/*add elememnt on diagonal from bottom left to top right*/
		sum2 += *(a + (size - i - 1) * size + i);
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);

}
