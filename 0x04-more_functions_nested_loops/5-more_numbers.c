#include "main.h"
/**
 * more_numbers - prints 1 to 14 
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar('1');
				_putchar('0' + (j % 10));
			}
			else
				_putchar('0' + j);
		}
		putchar('\n');
	}
}
