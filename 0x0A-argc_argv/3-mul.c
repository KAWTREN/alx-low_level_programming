#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main-multiplies two numbers
 * @argc:integer
 * @argv: array
 * Return:0
 */
int main(int argc, char **argv)
{
	int k = 1;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		k = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", k);
	}
	return (0);
}
