#include <string.h>
/**
 * _strcat - concatenates to strings
 * @dest: the fitst string
 * @src: the second string
 * @n: the number of bytes
 * Returns: ponter to src
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
