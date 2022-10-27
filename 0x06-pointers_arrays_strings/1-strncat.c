#include <string.h>
/**
 * _strcat - concatenates to strings
 * @dest: the fitst string
 * @src: the second string
 * @n: the number of bytes
 * returns: ponter to src
 */
char *_strncat(char *dest, char *src, int n);
{
	return (strcat(dest, src, n));
}
