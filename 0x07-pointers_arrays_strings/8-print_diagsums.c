#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of diagonal elememts of a matrix
 * @a: the matrix pointer
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int rl = 0, lr = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				lr += *(a + (i * size) + j);
			}
			if (size - i - 1 == j)
				rl += *(a + (i * size) + j);
		}
	}
	printf("%d, %d\n", lr, rl);
}
