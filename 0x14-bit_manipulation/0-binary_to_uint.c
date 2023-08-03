#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint- converts a binary number to an unsigned int
 * @b: binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		sum = sum * 2 + (*b - '0');
		b++;
	}
	return (sum);
}