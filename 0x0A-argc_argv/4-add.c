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
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
