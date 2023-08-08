#include "main.h"

/**
 * alloc_grid -  function that returns a pointer to a 2-D array of integers.
 *
 * @width: no of columns
 * @height: no of rows
 *
 * Return: pointer to the grid.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			if (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}

