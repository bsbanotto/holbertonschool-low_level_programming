#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 * @h: Pointer to head
 *
 * Return: Number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	unsigned int count = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
