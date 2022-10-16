#include <stdio.h>
/**
 * main -Entry poit
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c < 'z' + 1 ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
