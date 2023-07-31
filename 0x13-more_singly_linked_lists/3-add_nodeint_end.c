#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end-adds a new node at the end of a listint_t list.
 * @head: head of the list
 * @n: integer
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *current;

	if (node != NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node ;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = node; 
	}
	return (node);
}
