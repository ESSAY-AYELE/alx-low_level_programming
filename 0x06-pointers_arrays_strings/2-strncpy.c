#include <string.h>
/**
 * _strcpy - concatenates to strings
 * @dest: the fitst string
 * @src: the second string
 * @n: the number of bytes
 * returns: ponter to src
 */
char *_strncpy(char *dest, char *src, int n);
{
	return (strncpy(dest, src, n));
}
