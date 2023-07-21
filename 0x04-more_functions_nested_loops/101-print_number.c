#include "main.h"
/**
 * print_number - print any number one character at time
 * @n: the number
 * Return: void
 */
void print_number(int n)
{
	int i, tmp, p;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		return;
	}
	i = 1;
	while (i <= n)
	{
		i *= 10;
	}
	i /= 10;
	while (i > 1)
	{
		tmp = n % i;
		p = (n - tmp) / i;
		n = tmp;
		_putchar('0' + p);
		i /= 10;
	}
	_putchar('0' + n);
}
