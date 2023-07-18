#include "main.h"
/**
 * print_sign - check the sign of a number
 * @n: the character be checked
 * Return: 1 if is positive 0 if it is 0 -1 if it is negtive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');	
		return (-1);
	}
}
