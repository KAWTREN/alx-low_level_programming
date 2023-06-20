#include "main.h"
/**
 * main- prints the alphabet, in lowercase
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
