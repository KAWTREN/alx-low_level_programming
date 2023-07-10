#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup-returns a pointer to a newly allocated space in memory
 * @str:string
 * Return: char
 */
char *_strdup(char *str)
{
	char *result;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) + 1;
	result = malloc(sizeof(char) * len);
	if (result == NULL)
		return (NULL);
	strcpy(result, str);
	return (result);
}
