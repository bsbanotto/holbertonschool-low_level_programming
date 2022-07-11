#include "lists.h"

/**
 * *add_nodeint - Adds note to start of integer list
 * @head: double pointer to head of list
 * @n: integer to add
 *
 * Return: Address of new element, or NULL if failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
