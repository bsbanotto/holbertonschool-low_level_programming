#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a given node in a linked list
 * @head: double pointer to start of list
 * @index: index of node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *other;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		other = (*head)->next;
		free(*head);
		*head = other;
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	other = temp->next;
	temp->next = other->next;
	free(other);
	return (1);
}
