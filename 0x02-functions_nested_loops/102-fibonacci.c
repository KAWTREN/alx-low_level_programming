#include <stdio.h>
/**
 * main-50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j = 1;

	while (i <= 50)
	{
		j = i + i - 1;
		printf("%d, ", j);
		i++;
	}
	printf("\n");
	return (0);
}
