#include "main.h"
/**
 * print_rev - compute the length of the string
 * @s: the pointer to the stirng
 */
void print_rev(char *s)
{	int i, j;
	char tmp;

	for (i = 0; tmp != '\0'; i++)
		tmp = *(s + i);
	i -= 1;
	for (j = i; j > 0; j--)
		_putchar(*(s + j));
	_putchar('\n');
}
