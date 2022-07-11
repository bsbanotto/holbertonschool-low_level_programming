#include "lists.h"

/**
 * *get_nodeint_at_index - Prints the value at a give node
 * @head: pointer to head of list
 * @index: node to return value from
 *
 * Return: pointer to given node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);

	for (count = 0; count < index; count++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
