#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings-prints strings
 * @separator: separator between strings 
 * n: numbers of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(arg,char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(arg,char *));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
