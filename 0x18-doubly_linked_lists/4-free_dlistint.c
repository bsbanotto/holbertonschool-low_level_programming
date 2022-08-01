#include "lists.h"

/**
 * free_dlistint - Frees doubly linked list of integers
 * @head: pointer to head of doubly linked list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL && head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
