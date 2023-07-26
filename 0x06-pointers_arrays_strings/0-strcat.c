#include "main.h"
/**
 * _strcat - concatenate the strings
 * @src: source
 * @dest: destination
 * Return: pointer to the string
 */
char *_strcat(char *dest, char *src)
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
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
