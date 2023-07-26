#include "main.h"
/**
 * _strncat - concatenate the strings
 * @src: source
 * @dest: destination
 * @n: the number of character to append
 * Return: pointer to the string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		dest[j] = dest[i];
		i++;
		j++;
	}
	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
