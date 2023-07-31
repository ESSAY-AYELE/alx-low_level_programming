#include "main.h"
/**
 * _strchar - find a char in a string and return string starting from c
 * @s: the stinrg pointer
 * @c: the character to be found
 * Return: str
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
