#include "search_algos.h"

/**
 * linear_search - search for value in array in linear fashion
 * @size: the size of the array
 * @value: the value to search for
 * @array: the pointer to the first element to the array
 * Return: on sucess the index of the first apperance else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
