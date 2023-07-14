#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			l = j + 1;
			for (k = i; k <= '9'; k++)
			{
				while (l <= '9')
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (!((i == '9') && (j == '8') && (k == '9') && (l == '9')))
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				l = '0';
			}
		}
	}
	putchar('\n');		
	return (0);
}
