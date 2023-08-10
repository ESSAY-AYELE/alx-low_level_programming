#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: the minmum number the array start with
 * @max: the maxmimum number
 * Return: the pointer to the array
 */
int *array_range(int min, int max)
{
	int i, j = 0;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		*(ptr + j) = i;
		j++;
	}
	return (ptr);
}
