#include <unistd.h>
/**
 *  _strlen- length of a string
 *
 * @s: pointers
 * Return: integer
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
