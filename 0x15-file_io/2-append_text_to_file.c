#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: text content
 * Return: integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t byte = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	byte = write(fd, text_content, len);
	if (fd == -1 || byte == -1)
		return (-1);
	close(fd);
	return (1);
}
