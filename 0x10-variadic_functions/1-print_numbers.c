#include <stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers-prints a numbers
 * @separator: separator betbween numbers
 * @n: the of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d%s", va_arg(arg, int), separator);
		else
			printf("%d", va_arg(arg, int));
	}
	va_end(arg);
	printf("\n");
}
