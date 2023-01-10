#include "main.h"

/**
 * free_grid - allocate make free space
 * @grid: take a width of grid
 * @height: height of grid
 * Return: free grid
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
