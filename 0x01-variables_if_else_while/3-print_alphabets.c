#include <stdio.h>
/**
 * main -Entry poit
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c != 'Z'+1; c++)
	{
		putchar(c);
		if(c == 'z')
            c='A'-1;
	}
	putchar('\n');
	return (0);
}
