#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: last digit of the number
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
		lastDigit *= -1;
	_putchar('0' + lastDigit);
	return (lastDigit);
}
