#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat-concatenates two strings
 * @s1:string1
 * @s2:string2
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *result;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len1 = strlen(s1);
	len2 = strlen(s2);
	result = malloc(sizeof(char) * (len1 + len2) + 1);
	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strcat(result, s2);
	return (result);


}
