#include "lists.h"
/**
 * dlistint_len-returns the number of elements in a linked dlistint_t list
 * @h: pointer
 * Return: integer
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t  c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
