#include "main.h"
#include <stdio.h>
/**
 * get_bit-returns the value of a bit at a given index
 * @n: unsigned int
 * @index: insungned int
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >=  sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & mask) ? 1 : 0);

}
