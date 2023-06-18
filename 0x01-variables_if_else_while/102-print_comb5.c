#include <stdio.h>
/**
 * main-entry point
 *
 * Return: Always 0
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(' ');
			if (i != 99 && j != 99)
			{
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
