#include "lists.h"

/**
 * dlistint_len - Prints number of nodes in doubly linked list
 * @h: Pointer to head of list
 *
 * Return: Number of nodes printed
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t numelem = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		numelem++;
	}

	return (numelem);
}
