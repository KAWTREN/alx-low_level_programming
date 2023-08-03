#include "main.h"
/**
 * clear_bit-sets the value of a bit to 0 at a given index
 * @n: unsigned long int
 * @index: unsigned long int
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~m;
	return (1);
}
