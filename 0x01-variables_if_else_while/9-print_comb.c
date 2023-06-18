#include <stdio.h>
/**
 * main-entry point
 *
 * Return: Always 0
*/
int main(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
