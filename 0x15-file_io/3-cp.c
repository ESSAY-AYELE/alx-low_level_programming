#include "main.h"

/**
 * err_hand - check type of error and print on stderr
 * @file_to: flage for the write
 * @file_from: flage for the read
 * @av: argument
 */
void err_hand(int file_to, int file_from, char **av)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * main - copy one file to another file
 * @ac: number of input argument
 * @av: arugments
 * Return: 0 on succes
 */
int main(int ac, char *av[])
{
	int file_from, file_to, num_rd = 1024, num_wr;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_hand(file_to, file_from, av);
	while (num_rd == 1024)
	{
		num_rd = read(file_from, buf, 1024);
		err_hand(num_wr, num_rd, av);
		num_wr = write(file_to, buf, 1024);
		err_hand(num_wr, num_rd, av);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
