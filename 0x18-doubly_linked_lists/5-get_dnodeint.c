#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at a given index
 * @head: pointer to head of doubly linked list
 * @index: Node we want to return
 *
 * Return: value at index node or NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index > 0 && head->next != NULL)
	{
		head = head->next;
		index--;
	}
	if (index == 0)
		return (head);

	return (NULL);
}
