#include "search_algos.h"

/**
 * binary_search - search intger in a sorted array
 * @array: pointer to the first element in the array
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of the value if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pivot = 0, i;

	while (low < high)
	{
		printf("Searching in array: %d", array[low]);
		for (i = low + 1; i <= high; i++)
			printf(", %d", array[i]);
		printf("\n");
		pivot = (low + high) / 2;
		if (array[pivot] < value)
			low = pivot + 1;
		else if (array[pivot] == value)
		{
			return (pivot);
		}
		else
			high = pivot - 1;
	}
	return (-1);

}
