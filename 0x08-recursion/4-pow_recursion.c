#include "main.h"
/**
 * _pow_recursion - compute the power of a number
 * @x: base
 * @y: exponent
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	pow = _pow_recursion(x, y / 2);
	pow *= pow;
	if (y % 2 == 1)
		return (pow * x);
	return (pow);
}
