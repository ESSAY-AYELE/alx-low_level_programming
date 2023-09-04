#include "main.h"
/**
 * read_textfile - read file and prints it on the terminal
 * @filename: the path of the file
 * @letters: number of char to read
 * Return: the number of character acctually written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t rnum, sw;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (!buf)
		return (0);
	rnum = read(fd, buf, letters);
	sw = write(STDOUT_FILENO, buf, rnum);
	close(fd);
	return (sw);
}
