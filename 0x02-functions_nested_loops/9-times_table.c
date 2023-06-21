#include "main.h"
/**
 * times_table- prints the 9 times table
 */
void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = j * i;
			if (k > 9)
			{
				l = k % 10;
				m = (k - l) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar('0' + m);
				_putchar('0' + l);
			}
			else if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + k);
			}
			else
			{
				_putchar('0' + k);
			}
		}
		_putchar('\n');
	}
}
