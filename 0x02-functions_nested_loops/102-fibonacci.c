#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i = 0;
	unsigned long int j = 1;
	unsigned long int num, k;

	for (k = 0; k < 50; k++)
	{
		num = i + j;
		i = j;
		j = num;
		printf("%ul", num);
		if (k != 50)
			printf(", ");
	}
	return (0);
}
