#include "main.h"
/**
 * _strpbrk - finds the first character in the string str1
 * that matches any character specified in str2
 * @s: This is the C string to be scanned
 * @accept: This is the C string containing the characters to match
 * Return: substring of s staring from the first apperance of character
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*p == *s)
				return (s);
			p++;
		}
		s++;
	}
	return ('\0');
}
