#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index-nserts a new node at a given position
 * @head: head
 * @n: integer
 * @idx: index
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *node;
	unsigned int i;

	if (*head == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	current = *head;
	for (i = 0; i < idx - 1 && current; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = current->next;
	current->next = node;
	return (node);
}
