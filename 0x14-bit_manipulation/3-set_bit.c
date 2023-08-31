#include "main.h"

/**
 *
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
