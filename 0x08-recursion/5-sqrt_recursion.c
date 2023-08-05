#include "main.h"
/**
 * _sqrt_recursion - compute the sqrt of a number only for perfect square
 * @n: the number to be computed
 * Return: square root if it is prefect square number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 *_sqrt - square root using recursion
 * @n: the number
 * @i: index
 * Return: square root
 */
int _sqrt(int n, int i)
{
	n = n - i;
	if (n == 0)
		return ((i + 1) / 2);
	else if (n < 0)
		return (-1);
	i = i + 2;
	return (_sqrt(n, i));
	
}
