#include "main.h"


/**
  *free_grid- function that frees a 2 dimensional grid previously created
  *           by your alloc_grid function.
  *@grid : grid whose memory  is to be freed
  *@height: the height  of the grid
  */

void free_grid(int **grid, int height)
{
	int  i;

	for (i = 0; i < height; i++)
	{
		/*iterate through each row calling free to release the memory*/
		/*allocated in each row*/
		free(grid[i]);

	}
	/*calling free to release the memory allocated to the grid array*/
	free(grid);







}
