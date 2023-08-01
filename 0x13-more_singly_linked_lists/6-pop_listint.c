#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint- deletes the head node of a listint_t linked list
 * @head: head of the list
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *firstnode;

	if (*head == NULL)
		return (0);
	else
	{
		firstnode = *head;
		*head = firstnode->next;
		free(firstnode);
	}
	return (firstnode->n);
}
