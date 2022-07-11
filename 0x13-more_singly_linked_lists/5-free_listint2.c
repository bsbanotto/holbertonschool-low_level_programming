#include "lists.h"

/**
 * free_listint2 - Frees singly linked integer list
 * @head: pointer to head
 *
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
	}
	head = NULL;
}