#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * **alloc_grid - a function that returns a pointer to
  * a 2 dimensional array of integers.
  * @width: side 1 of the 2d array of integers
  * @height: side 2 of the 2d array of integers
  * Return: NULL if the height or width is 0 or negative
  * NULL on failure
  */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

