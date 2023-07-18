#include "main.h"
/**
 * _islower - check if a char is lower case or not
 * @c: the character be checked
 * Return: 1 if is lowercase 0 if not
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
