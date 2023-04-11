#include "main.h"

/**
 * free_grid - frees a memory 2D grid
 * @grid: the grid to free
 * @height: of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
