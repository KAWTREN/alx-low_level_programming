#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len- returns the number of elements in a linked listint_t list
 * @h: pointer to the head of the list
 * Return: number of the elements linked
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}