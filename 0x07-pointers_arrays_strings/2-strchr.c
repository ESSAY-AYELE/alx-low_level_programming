#include "main.h"
/**
 * _strchar - find a char in a string and return string starting from c
 * @s: the stinrg pointer
 * @c: the character to be found
 * Return: str
 */
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;
	char str[100];

	while (s[i] != c && s[i])
	{
		i++;
	}
	while (s[i])
	{
		s[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (s);
}
