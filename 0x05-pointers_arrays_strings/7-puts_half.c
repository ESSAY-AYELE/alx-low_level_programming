#include "main.h"
/**
 * puts_half - prints a string starting from the half
 * @str: the string pointer
 */
void puts_half(char *str)
{
	int i, j, k;
	char tmp = 'A';

	for (i = 0; tmp != '\0'; i++)
		tmp = str[i];
	i -= 2;
	k = i / 2;
	for (j = k + 1; j <= i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
