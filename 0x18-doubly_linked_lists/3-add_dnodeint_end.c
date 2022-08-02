#include "lists.h"

/**
 * add_dnodeint_end - Adds node to end of doubly linked list
 * @head: double pointer to head of list
 * @n: integer value to be stored in new node
 *
 * Return: address of new element, or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;

	return (new);
}
