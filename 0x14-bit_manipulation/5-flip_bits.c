#include "main.h"

/**
 * flip_bits - it computes the number of bit need to be change
 * in oreder to go from first number to the second number
 * @n: the first number
 * @m: the second number
 * Return: the number of bit need to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = 0, k;

	k = n ^ m;
	while (k)
	{
		if (k & 1)
			result += 1;
		k >>= 1;
	}
	return (result);
}
