#include "main.h"
/**
 * _strstr-locates a substring
 * @haystack: string
 * @needle: string
 * Return: character
 */
char *_strstr(char *haystack, char *needle)
{
	for ( ; *haystack != '\0'; haystack++)
	{
		char *p = needle;
		char *l = haystack;

		while (*p == *l && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
