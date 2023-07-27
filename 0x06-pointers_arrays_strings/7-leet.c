#include "main.h"
/**
 * leet - encode a string in 1337 format
 * @s: the string pointer
 * Return: the string
 */
char *leet(char *s)
{
	int i, num;
	char c;

	for (i = 0; s[i]; i++)
	{
		c = s[i];
		num = (c == 'A' || c == 'a') * 4 + (c == 'e' || c == 'E') * 3 + (c == 'O'
|| c == 'o') * 0 + (c == 't' || c == 'T') * 7 + (c == 'l' || c == 'L') * 1;
		if (num || (c == 'O' || c == 'o'))
			s[i] = '0' + num;
	}
	return (s);
}
