#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, i;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
