#include "main.h"
/**
 * jack_bauer - prints every mintues starting from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	char i, j, k, l;

	for (i = '0'; i < '3'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k < '6'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
			if ((i == '2') && (j == '3'))
				break;
		}
	}
}
