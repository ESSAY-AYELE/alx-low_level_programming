#include "main.h"
/**
 * _strlen_recursion - compute the length of a string
 * @s: pointer to a string
 * Return: length of the stirng
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[0] == '\0')
		return (len);
	s++;
	len = 1 + _strlen_recursion(s);
	return (len);
}
