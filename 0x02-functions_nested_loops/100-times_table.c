#include "main.h"
/**
 * print_times_table - prints time table from 0 to n
 * @n: the length of the table
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, pro, lastDigit, firstDigit, secondDigit;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			pro = i * j;
			lastDigit = pro % 10;
			firstDigit = (pro - lastDigit) / 10;
			secondDigit = (pro - lastDigit - firstDigit) / 100;
			if ((pro < 10) && (j != 0))
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (pro < 100)
			{
				_putchar(' ');
				_putchar('0' + firstDigit);
			}
			else if (pro >= 100)
			{
				_putchar('0' + secondDigit);
				_putchar('0' + firstDigit);
			}
			_putchar('0' + lastDigit);
			if  (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
