#include "function_pointers.h"
/**
 * int_index - it searches int from array with by cmp function
 * @array: the array to search from
 * @size: the size of the array
 * @cmp: pointer to cmp function
 * Return: the index of first int that satisify the cmp condition
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}
