#include "main.h"
/**
 * times_table- prints the 9 times table
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			_putchar(k );
			_putchar(' ');
			if (j != 9)
			{
				_putchar(',');
			}
		}
	}
	_putchar('\n');
}
