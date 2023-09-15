#include "lists.h"
/**
 *  free_dlistint -  frees a dlistint_t list
 *  @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
