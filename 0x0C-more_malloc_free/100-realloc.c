#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc-reallocates a memory block 
 * @ptr: pointer
 * @old_size: old size
 * new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	unsigned int cpys;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	nptr = malloc(new_size);
	if (nptr != NULL)
	{
		cpys = old_size;
		memcpy(nptr, ptr, cpys);
		free(ptr);
	}
	return (nptr);
}
