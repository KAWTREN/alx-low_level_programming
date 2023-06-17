#include <stdio.h>
/**
 * main-entry point
 *
 * Return: Always 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'd'; c++)
	{
		putchar(c);
	}
	for (c = 'f'; c <= 'p'; c++)
	{
		putchar(c);
	}
	for (c = 'r'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar ('\n');
	return (0);
}
