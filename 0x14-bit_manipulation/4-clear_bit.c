#include "main.h"

/**
 * clear_bit - clear a bit of number at given index
 * @n: the number
 * @index: index
 * Return: 1 if succes else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index > 64)
		return (-1);
	bit <<= index;
	(*n) = (*n) & ~bit;
	return (1);
}
