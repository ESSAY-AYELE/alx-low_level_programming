#include "main.h"
/**
 * _memset - fill a memory s staring from p up to p + n
 * @p: stratring point of the memomory address
 * @s: the value to fill it with
 * @n: number to memory space to be filled
 * Return: p
 */
char *_memset(char *p, char s, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(p + i) = s;
	return (p);
}
