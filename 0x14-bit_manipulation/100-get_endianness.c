#include "main.h"

/**
 * get_endianness - check if it big or little endiannes
 * Return: 1 if it is little endian else 0
 */
int get_endianness(void)
{
	int i = 1;

	if (*(char *)&i == 1)
		return (1);
	return (0);
}
