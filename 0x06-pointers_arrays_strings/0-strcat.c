#include "main.h"
/**
 * _strcat-concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
