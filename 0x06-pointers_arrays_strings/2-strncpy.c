#include <string.h>
/**
 * _strncpy - concatenates to strings
 * @dest: the fitst string
 * @src: the second string
 * @n: the number of bytes
 * Return: ponter to src
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
