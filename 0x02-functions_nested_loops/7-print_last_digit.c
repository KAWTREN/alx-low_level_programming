#include "main.h"
/**
 * print_last_digit- prints the last digit of a number
 *
 * @n: a number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (d < 0)
	{
		d*= -1;
	}
	return (d);
}