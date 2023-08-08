#include "main.h"

/**
 * free_grid - deallocate memory of a 2-D array.
 *
 * @grid: pointer to the 2-D array pointer.
 * @height: no of rows of the @-D array.
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
