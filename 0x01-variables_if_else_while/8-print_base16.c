#include <stdio.h>
/**
 * main -Entry poit
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = '0'; c < 'g' ; c++)
	{
		putchar(c);
		if (c == '9')
			c = 'a' - 1;
	}
	putchar('\n');
	return (0);
}
