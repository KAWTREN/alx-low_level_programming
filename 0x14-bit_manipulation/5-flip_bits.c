#include "main.h"
/**
 * flip_bits-returns the number of bits you would need to flip
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif = n ^ m;
	unsigned long int i = 0;

	while (dif != 0)
	{
		i += dif & 1;
		dif >>= 1;
	}
	return (i);
}
