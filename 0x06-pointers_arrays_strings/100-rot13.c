#include "main.h"
/**
 * rot13 - encode a string in rot13 fromat
 * @s: pointer to the string
 * Return: the pointer
 */
char *rot13(char *s)
{
	int i, num;
	char c;
	char d = 'n' - 'a';

	for (i = 0; s[i]; i++)
	{
		c = s[i];
		num = ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm')) * 1 +
			((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z')) * -1;
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			s[i] = s[i] + (num * d);
	}
	return (s);
}
