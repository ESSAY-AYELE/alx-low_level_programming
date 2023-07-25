#include "main.h"
/**
 * print_rev - compute the length of the string
 * @s: the pointer to the string
 */
void print_rev(char *s)
{
	int j, i;
	char tmp = 'a';

	for (i = 0; tmp != '\0'; i++)
		tmp = *(s + i);
	i = i - 1;
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
