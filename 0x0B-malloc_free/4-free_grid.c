#include "main.h"
#include <stdlib.h>

/**
  * free_grid - a function that frees a 2 dimensional
  * grid previously created by your alloc_grid function.
  * @grid: the 2d grid created
  * @height: height of grid
  * Return: grid
  */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}
		free(grid);
}
