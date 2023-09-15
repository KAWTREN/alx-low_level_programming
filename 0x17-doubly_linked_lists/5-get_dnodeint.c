#include "lists.h"
/**
 * *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer
 * @index: integer
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (head != NULL)
	{
		if (c == index)
			return (head);
		head = head->next;
		c++;
	}
	return (NULL);
}
