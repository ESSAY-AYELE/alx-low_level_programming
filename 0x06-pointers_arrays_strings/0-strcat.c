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
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[j] = dest[i];
		j++;
	}
	j++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return dest;
}
