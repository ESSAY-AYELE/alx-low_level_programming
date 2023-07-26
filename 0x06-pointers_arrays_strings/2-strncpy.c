#include "main.h"
/**
 * _strncpy - used to copy a specified number of characters from one string to another
 * @dest: destination pointer
 * @src: source pointer
 * @n: the number of character to be copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
