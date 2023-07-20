#include <main.h>
/**
 * _isupper - check if a given int is uppercase or not
 * @c: the int to be checked
 * Return: 1 if c is uppercase else 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
