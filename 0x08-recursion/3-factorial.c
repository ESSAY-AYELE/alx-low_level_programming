#include "main.h"
/**
 * factorial - compute the factorial
 * @n: the number to be computed
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (1);
	return (n * factorial(n - 1));
}
