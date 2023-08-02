#include "main.h"
/**
 * is_prime_number - check a number is prime or not
 * @n: the number
 * Return: 1 if it is or  0
 */
int is_prime_number(int n)
{
	int i = n / 2;

	if (n <= 0)
		return (0);
	return (prime_or_not(n, i));
}
/**
 * prime_or_not - check prime or not using recurison
 * @n: the number
 * @i: the index
 * Return: 0 or 1
 */
int prime_or_not(int n, int i)
{
	if (i == 1)
		return (1);
	else
		if (n % i == 0)
			return (0);
	return (prime_or_not(n, --i));
}
