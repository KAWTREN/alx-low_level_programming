#include <stdio.h>
/**
 * main-rints the numbers from 1 to 100
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 1; i <= 100; i++)
	{
		j = i % 3;
		k = i % 5;
		if (j == 0 && k == 0)
		{
			printf("FizzBuzz");
		}
		else if (k == 0)
		{
			printf("Buzz");
		}
		else if (j == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}