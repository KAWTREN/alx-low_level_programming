#include "main.h"
/**
 * read_textfile-eads a text file and prints
 * @filename: file name
 * @letters: the number of letters it should read and print
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t byte;
	int fd;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	byte = read(fd, &buf[0], letters);
	byte = write(STDOUT_FILENO, &buf[0], byte);
	close(fd);
	return (byte);
}
