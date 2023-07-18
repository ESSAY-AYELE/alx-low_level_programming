#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 1;
	unsigned int num, k;

	for (k = 0; k < 50; k++)
	{
		num = i + j;
		i = j;
		j = num;
		printf("%u", num);
		if (k != 50)
			printf(", ");
	}
	return (0);
}
