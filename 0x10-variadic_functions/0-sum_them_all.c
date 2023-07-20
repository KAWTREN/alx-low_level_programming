#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all-the sum of all its parameters
 * @n: number of paramerters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list countptr;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(countptr, n);
	for (i = 0; i < n; i++)
	{
	sum += va_arg(countptr, int);
	}
	va_end(countptr);
	return (sum);
}
