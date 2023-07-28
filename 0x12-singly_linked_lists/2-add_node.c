#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * add_node- adds a new node at the beginning of a list_t list
 * @head: head of list
 * @str: string
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len])
		len++;
	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);
	new_list->str = strdup(str);
	if (new_list == NULL)
	{
		free(new_list);
		return (NULL);
	}
	new_list->next = *head;
	new_list->len = len;
	*head = new_list;
	return (new_list);

}
