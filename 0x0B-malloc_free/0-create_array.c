#include "main.h"
#include <stdlib.h>
/**
 * *create_array-creates an array
 * @size: unsigned integer
 * @c: character
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array = malloc(size * sizeof(char));
		if (array == NULL)
			return (NULL);
		for (i = 0 ; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
	}
}