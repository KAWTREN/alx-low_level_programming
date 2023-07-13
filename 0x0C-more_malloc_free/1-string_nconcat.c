#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat-concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: length of s2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len = 0;

	len = strlen(s1) + 1;
	ptr = malloc(sizeof(char) * (len + n + 1));
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
