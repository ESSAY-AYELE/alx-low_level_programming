#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n: decimal number to be printed
 */
void print_binary(unsigned long int n)
{
	if (n)
	{
		if (n >> 1)
		{
			print_binary(n >> 1);
			_putchar('0' + (n & 1));
		}
		else
			_putchar('1');
	}
	else
		_putchar('0');
}
