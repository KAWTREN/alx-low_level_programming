#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint- returns the sum of all the data (n) of a listint_t linked list
 * @head: head
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
	}
	return (sum);
}