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
	ssize_t byte, len;

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
	{
		byte = write(fd, text_content, len);
	}
	close(fd);
	return (byte == len ? 1 : -1);
}
