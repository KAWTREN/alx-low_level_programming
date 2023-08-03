#include "main.h"
#include <stdio.h>
/**
 * print_binary-  prints the binary representation of a number
 * @n: unsined integer
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int prflag = 0;

	if (n == '0')
	{
		_putchar('0');
		return;
	}
	while (mask != 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			prflag = 1;
		}
		else if (prflag)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
