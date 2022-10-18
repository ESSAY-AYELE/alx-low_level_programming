#include <stdio.h>
/**
 * main -Entry poit
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int f, s, t, l;

	for (f = 48; f < 58 ; f++)
	{
		for (s = 48; s < 58 ; s++)
		{
			for (t = f; t < 58 ; t++)
			{
				for (l = s + 1; l < 58 ; l++)
				{
					putchar(f);
					putchar(s);
					putchar(' ');
					putchar(t);
					putchar(l);
					if (!(f == 57 && s == 56 && t == 57 && l == 57))
					{
						putchar(',');
						putchar(' ');
					}

				}
			}

		}

	}
	putchar('\n');
	return (0);
}
