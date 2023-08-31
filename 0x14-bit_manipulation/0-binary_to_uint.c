#include "main.h"

/**
 * binary_to_uint - change binary formated string to unsigned int
 * @b: pointer to the stirng
 * Return: the decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0, i = 0;

	while (b[i] != '\0')
	{
		d <<= 1;
		if (b[i] == '1')
			d += 1;
		else if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	return (d);
}
