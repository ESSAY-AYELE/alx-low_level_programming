#include "search_algos.h"

/**
 *
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = 0, m;

	m = sqrt(size);
	if (array == NULL)
		return (-1);
	while (b <= size - 1)
	{
		if (b != 0)
			printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[b] >= value)
			break;
		a = b;
		b += m;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);
	while (a <=b && a < size)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);	
		if (array[a] == value)
		{
			return (a);
		}
		a++;
	}
	return (-1);
}
