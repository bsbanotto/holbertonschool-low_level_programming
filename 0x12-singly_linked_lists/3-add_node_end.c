#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - Function that adds a node to the tail of a list
 * @head: pointer to head of singly linked list
 * @str: string to be added
 *
 * Return: Address of new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;

	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);

	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = strlen(temp->str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	new = *head;
	while (new->next)
		new = new->next;
	new->next = temp;

	return (new);
}
