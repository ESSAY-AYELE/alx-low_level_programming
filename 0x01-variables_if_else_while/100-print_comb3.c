#include <stdio.h>
/**
 * main -Entry poit
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int f, s;

	s = '0';
	for (f = 48; f < 57 ; f++)
	{
		s = f + 1;
		while (s < 58)
		 {
			 putchar(f);
			 putchar(s);
			 s++;
			 if (f != 56)
			 {
				 putchar(',');
				 putchar(' ');
			 }
		 }
	}
	putchar('\n');
	return (0);
}
