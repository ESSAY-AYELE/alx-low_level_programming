#include "main.h"
/**
 * print_alphabet - prints alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i = 'a';
	int j = 0;

	while(j < 10)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
		i = 'a';
	}

}
