#include "_putchar.h"
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
	char i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
			_putchar(i);
		_putchar('\n');
	}
}
