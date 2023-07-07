#include <unistd.h>
/**
 * _memset- fills memory with a constant byte
 * @s: pionter
 * @b: character
 * @n: unsigned integer
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
