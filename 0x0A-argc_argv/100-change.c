#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of this program
 * @argc: number of argument
 * @argv: array of string
 * Return: int
 */
int main(int argc, char **argv)
{
	int cents[] = {25, 10, 5, 2, 1};
	int i, change, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	change = 0;
	for (i = 0; i < 5; i++)
	{
		if (cents[i] <= num)
		{
			change += num / cents[i];
			num %= cents[i];
		}
	}
	printf("%d\n", change);
	return (0);
}
