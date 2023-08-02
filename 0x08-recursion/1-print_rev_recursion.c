#include "main.h"
/**
 * _print_rev_recursion - print string in a reverse order
 * @s: pointer to a string
 */
void _print_rev_recursion(char *s)
{
	char c = s[0];

	if (s[0] == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	_putchar(c);
}
