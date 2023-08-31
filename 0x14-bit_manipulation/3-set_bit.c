#include "main.h"

/**
 * set_bit - sets a bit of number at given index 1
 * @n: the number
 * @index: index
 * Return: 1 if succes else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index > 64)
		return (-1);
	bit <<= index;
	(*n) = (*n) | bit;
	return (1);
}
