#include <string.h>
/**
 * _strncat - concatenates to strings
 * @dest: the fitst string
 * @src: the second string
 * @n: the number of bytes
 * Return: ponter to src
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
