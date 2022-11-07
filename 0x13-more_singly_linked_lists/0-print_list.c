#include "lists.h"

/**
 * print_list - Prints all elements of a list
 * @h: Pointer to head
 *
 * Return: Number of nodes in list
 */

size_t print_list(const listint_t *h)
{
	const listint_t *temp = h;
	unsigned int count = 0;

	if (temp->str == NULL)
	{
		printf("[0] (nil)\n");
		temp = temp->next;
		count++;
	}

	while (temp)
	{
		printf("[%d] %s\n", temp->n, temp->str);
		temp = temp->next;
		count++;
	}
	return (count);
}
