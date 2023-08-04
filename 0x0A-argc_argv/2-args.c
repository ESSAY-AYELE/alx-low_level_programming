#include <stdio.h>
/**
 * main - prints the name of this program
 * @argc: number of argument
 * @argv: array of string
 * Return: int
 */
int main(int argc, char **argv)
{
	while(argc--)
		printf("%s\n", *argv++);
	return (0);
}
