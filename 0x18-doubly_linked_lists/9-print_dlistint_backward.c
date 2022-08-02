#include "lists.h"

/**
 * print_dlistint_backward - Prints list backwards
 * @h: pointer to head of list
 *
 * Return: Number of elements in list
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t numelem = 1;

	if (!h)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		numelem++;
	}

	while (h)
	{
		printf("%d\n", h->n);
		h = h->prev;
	}
	return (numelem);
}
