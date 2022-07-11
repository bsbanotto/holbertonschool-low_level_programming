#include "lists.h"

/**
 * sum_listint - Returns sum of values in a list
 * @head: pointer to start of linked list
 *
 * Return: sum of int in linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
