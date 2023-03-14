#include "main.h"


/**
  ***alloc_grid- function that returns a pointer to a
  *              2 dimensional array of integers
  *@width: the width of the 2 -dimemnsional; array of integers
  *@height: the height of the 2-dimensional array of integers
  *Return: a pointer to a 2-dimensional array of integers
  */


int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **) malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);

	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/* free previously allocated memory */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);

			}
			free(grid);
			return (NULL);

		}
		/*initialize each element to 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;

		}

	}
	return (grid);
}

