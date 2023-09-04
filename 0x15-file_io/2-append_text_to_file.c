#include "main.h"

/**
 * append_text_to_file - append text in the end of file
 * @filename: the name of the file
 * @text_content: the content to be written
 * Return: 1 on succes -1 if it faile
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, numL;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 0)
		return (-1);
	for (numL = 0; text_content[numL]; numL++)
		;
	if (write(fd, text_content, numL) < 0)
		return (-1);
	close(fd);
	return (1);
}
