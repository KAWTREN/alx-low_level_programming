#include "main.h"
/**
 * create_file-creates a file.
 * @filename: file name
 * @text_content: text content
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	ssize_t byte;

	while (*text_content++)
	{
		i++;
	}
	return (i);
	if (!filename)
		return (-1);
	fd = open(filename, O_RDONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (i)
	{
		byte = write(fd, text_content, i);
	}
	close(fd);
	return (byte == i ? 1 : -1);
}
