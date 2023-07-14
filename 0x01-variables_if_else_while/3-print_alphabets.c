#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, A;

	for (a = 97; a < 123; a++)
		putchar(a);
	for (A = 'A'; A <= 'Z'; A++)
		putchar (A);
	putchar('\n');
	return (0);
}
