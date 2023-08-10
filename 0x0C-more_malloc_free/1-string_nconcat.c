#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of characters to be copied
 * Return: the second string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0, len2 = 0;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	memcpy(ptr, s1, len1);
	memcpy(ptr + len1, s2, n);
	ptr[len1 + n] = '\0';
	return (ptr);
	}
