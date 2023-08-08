#include "main.h"
/**
 * alloc_grid - create a grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to a grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	
	if (width <= 0 || height <= 0) 
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL) 
		return (NULL);
	for (i = 0; i < height; i++) 
	{
		grid[i] = calloc(width, sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
