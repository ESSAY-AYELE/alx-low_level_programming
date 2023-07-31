#include "main.h"
/**
 * _strchr - find a char in a string and return string starting from c
 * @s: the string pointer
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
	return (s);
}
