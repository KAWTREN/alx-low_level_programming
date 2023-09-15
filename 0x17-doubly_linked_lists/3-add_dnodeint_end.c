#include "lists.h"
/**
 * *add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer
 * @n:integer
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_list, *t;

	if (head == NULL)
		return (NULL);
	n_list = malloc(sizeof(dlistint_t));
	if (n_list == NULL)
		return (NULL);
	n_list->n = n;
	n_list->prev = NULL;
	n_list->next = NULL;
	if (*head == NULL)
		*head = n_list;
	else
	{
		t = *head;
		while (t->next)
		{
			t = t->next;
		}
		n_list->prev = t;
		t->next = n_list;
	}
	return (n_list);
}
