#include <stdio.h>
/**
 * main - prints the name of this program
 * @argc: number of argument
 * @argv: array of string
 * Return: int
 */
int main(int argc, __attribute__ ((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
