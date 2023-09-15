#include "lists.h"
/**
 * add_dnodeint - add new node at the beginning of a dlistint_t list.
 * @head: pointer to head pointer
 * @n: integer value
 * Return: node address or null in fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_list;

	if (head == NULL)
		return (NULL);
	n_list = malloc(sizeof(dlistint_t));
	if (n_list == NULL)
		return (NULL);
	n_list->n = n;
	n_list->prev = NULL;
	n_list->next = *head;
	*head = n_list;
	return (n_list);
}
