#include "main.h"

/**
 * get_bit - caluclate the bit of number at the given index
 * @n: the number
 * @index: index of the required bit
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index) & 1;

	return (bit);
}
