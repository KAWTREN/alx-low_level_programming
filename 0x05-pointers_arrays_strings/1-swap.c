#include "main.h"
/**
 * swap_int- swaps the values
 * @a: integer
 * @b:integer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
