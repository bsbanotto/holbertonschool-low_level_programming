#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node at given position
 * @head: double pointer to start of linked list
 * @idx: index where node is to be added
 * @n: integer to be added at new node
 *
 * Return: address of the new node, or NULL if failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);

	if (idx > 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1; i++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
