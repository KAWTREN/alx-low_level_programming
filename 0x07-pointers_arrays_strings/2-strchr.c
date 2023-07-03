#include "main.h"
/**
 * _strchr- locates a character in a string
 * @s: character
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	else
	{
		return (0);
	}
	return (s);
}
