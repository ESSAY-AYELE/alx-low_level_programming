#include "main.h"

/**
 * create_file - create file and write on it
 * @filename: the path of the file
 * @text_content: the content to be writen
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, numL;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (!text_content)
		text_content = "";
	for (numL = 0; text_content[numL]; numL++)
		;
	if (write(fd, text_content, numL++) < 0)
		return (-1);
	close(fd);
	return (1);
}
