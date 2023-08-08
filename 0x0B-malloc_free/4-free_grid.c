#include "main.h"
/**
 * free_grid - free gird
 * @grid: pointer to the grid
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i = height - 1;

	for (i = 0; i >= 0; i--)
		free(grid[i]);
	free(grid);
}	
