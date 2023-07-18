#include "main.h"
/**
 * _abs - computes the absoute value of number
 * @n: the number to be computed
 * Return: the absoulte value of a number
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
