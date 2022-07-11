#include "lists.h"

/**
 * add_node_end - Adds node to end of linked list
 * @head: head of linked list
 * @n: integer to add
 *
 * Return: address of new element or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
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
