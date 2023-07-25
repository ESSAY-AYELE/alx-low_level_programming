#include "main.h"
/**
 * print_rev - compute the length of the string
 * @s: the pointer to the string
 */
void print_rev(char *s)
{
	int i, j;
	char tmp;

	for (i = 0; tmp != '\0'; i++)
	{
		tmp = *(s + i);
	}
	for (j = 1; j < i; j++)
	{
		_putchar(*(s +(i - j));
	}
	_putchar('\n');
}
