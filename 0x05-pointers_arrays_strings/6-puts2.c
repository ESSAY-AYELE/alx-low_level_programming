#include "main.h"
/**
 * puts2 - prints stiring
 * @str: string pointer
 */
void puts2(char *str)
{
	int i, j;


	for (i = 0; *(str + i) != '\0'; i++);

	for (j = 0; j < i; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
