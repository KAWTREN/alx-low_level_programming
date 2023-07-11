#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *argstostr-concatenates all the arguments of your program
 * @ac: integer
 * @av: char
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int len, i, c = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		strcpy(result + c, av[i]);
		c += strlen(av[i]);
		result[c] = '\n';
		c++;
	}
	result[c] = '\n';
	return (result);

}
