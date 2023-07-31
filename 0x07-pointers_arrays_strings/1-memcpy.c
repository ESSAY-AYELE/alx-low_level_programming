#include "main.h"
/**
 * _memcpy - copy src to dest
 * @dest: destination memory addres
 * @src: source address
 * @n: number of memory location to be copied
 * Return: dest address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
