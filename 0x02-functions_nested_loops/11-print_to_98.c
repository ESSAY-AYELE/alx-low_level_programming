#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print up to 98 from any given integer
 * @n: the starting number
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
		return;
	}
	do {
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	} while (n != 98);
	printf("%d\n", 98);
}
