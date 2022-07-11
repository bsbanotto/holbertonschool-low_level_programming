#include "lists.h"

/**
 * listint_len - Prints number of elements in a list
 * @h: Pointer to head
 *
 * Return: Number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	unsigned int count = 0;

	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
