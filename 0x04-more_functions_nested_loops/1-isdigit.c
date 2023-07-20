#include "main.h"
/**
 * _isdigit - check if a given int is uppercase or not
 * @c: the int to be checked
 * Return: 1 if c is uppercase else 0
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
