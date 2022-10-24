#include "main.h"
#include <string.h>
/**
 * puts_half - prints of  the string
 * @str: the string
 *
 */
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = (len / 2) - 1; i < len - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
