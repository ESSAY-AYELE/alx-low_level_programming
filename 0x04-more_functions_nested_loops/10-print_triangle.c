#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: the size of a triangle
 */
void print_triangle(int size)
{
	int i, j, k, l;

	for (i = 1; i <= size; i++)
	{
		l = size - i;
		for (j = 0; j < l; j++)
			_putchar(' ');
		for (k = 0; k < i; k++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
