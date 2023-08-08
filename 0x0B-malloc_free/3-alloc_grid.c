#include "main.h"
/**
 * _alloc_grid - create a grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to a grid
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);
	arr = (int **)malloc(height * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		arr[i] = (int *)malloc(width * sizeof(int));
	if (arr[0] == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
