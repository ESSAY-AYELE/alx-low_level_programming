#include <stdio.h>
#include <math.h>
/**
 * main - find the greatest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	unsigned long int number = 612852475143;
	unsigned long int i = 2;

	while (number != 1)
	{
		if (number % i == 0)
		{
			while (number % i == 0)
			{
				number /= i;

			}
		}
		i++;
	}
	printf("%lu\n", i - 1);
	return (0);
}
