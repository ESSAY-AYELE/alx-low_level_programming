#include "main.h"
/**
 * times_table - prints time table from 0 to 9
 * Return: void
 */
void times_table(void)
{
	int i, j, pro, lastDigit, firstDigit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			pro = i * j;
			lastDigit = pro % 10;
			firstDigit = (pro - lastDigit) / 10;
			if (pro >= 10)
				_putchar('0' + firstDigit);
			else
				_putchar(' ');
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
