#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-entry point
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	scanf("%d ", &n);
	if (digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5 \n ", n, digit);
	}
	return (0);
}
