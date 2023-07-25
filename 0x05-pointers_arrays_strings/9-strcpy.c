#include "main.h"
/**
 * strcpy - copy a string
 * @dest: destinition string
 * @src: source of the stirng
 * Return: the pointer to the destintion string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
